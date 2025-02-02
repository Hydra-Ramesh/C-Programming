#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // For sleep()
#include <termios.h> // For keyboard input
#include <fcntl.h> // For non-blocking input

// Macros for game dimensions
#define HEIGHT 20
#define WIDTH 40

// Array to store the coordinates of the snake's tail
int snakeTailX[100], snakeTailY[100];

// Variables for snake length, game state, and score
int snakeTailLen, gameover, key, score;

// Coordinates of snake's head and fruit
int x, y, fruitx, fruity;

// Custom kbhit() function for non-blocking input
int kbhit() {
    struct termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF) {
        ungetc(ch, stdin);
        return 1;
    }

    return 0;
}

// Function to generate the fruit within the boundary
void setup() {
    gameover = 0;
    x = WIDTH / 2;
    y = HEIGHT / 2;
    fruitx = rand() % WIDTH;
    fruity = rand() % HEIGHT;
    while (fruitx == 0) fruitx = rand() % WIDTH;
    while (fruity == 0) fruity = rand() % HEIGHT;
    score = 0;
    snakeTailLen = 0;
}

// Function to draw the game field, snake, and fruit
void draw() {
    system("clear"); // Use "cls" for Windows

    // Draw top wall
    for (int i = 0; i < WIDTH + 2; i++) printf("-");
    printf("\n");

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j <= WIDTH; j++) {
            // Draw side walls
            if (j == 0 || j == WIDTH) printf("#");

            // Draw snake's head
            if (i == y && j == x) printf("O");

            // Draw fruit
            else if (i == fruity && j == fruitx) printf("*");

            // Draw snake's body
            else {
                int prTail = 0;
                for (int k = 0; k < snakeTailLen; k++) {
                    if (snakeTailX[k] == j && snakeTailY[k] == i) {
                        printf("o");
                        prTail = 1;
                    }
                }
                if (!prTail) printf(" ");
            }
        }
        printf("\n");
    }

    // Draw bottom wall
    for (int i = 0; i < WIDTH + 2; i++) printf("-");
    printf("\n");

    // Print score and instructions
    printf("Score = %d\n", score);
    printf("Press W, A, S, D for movement.\n");
    printf("Press X to quit the game.\n");
}

// Function to handle keyboard input
void input() {
    if (kbhit()) {
        switch (tolower(getchar())) {
            case 'a': if (key != 2) key = 1; break;
            case 'd': if (key != 1) key = 2; break;
            case 'w': if (key != 4) key = 3; break;
            case 's': if (key != 3) key = 4; break;
            case 'x': gameover = 1; break;
        }
    }
}

// Function to handle game logic
void logic() {
    // Update snake's tail positions
    int prevX = snakeTailX[0], prevY = snakeTailY[0];
    int prev2X, prev2Y;
    snakeTailX[0] = x;
    snakeTailY[0] = y;
    for (int i = 1; i < snakeTailLen; i++) {
        prev2X = snakeTailX[i];
        prev2Y = snakeTailY[i];
        snakeTailX[i] = prevX;
        snakeTailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    // Move snake's head
    switch (key) {
        case 1: x--; break;
        case 2: x++; break;
        case 3: y--; break;
        case 4: y++; break;
    }

    // Check for collisions with walls or tail
    if (x < 0 || x >= WIDTH || y < 0 || y >= HEIGHT) gameover = 1;
    for (int i = 0; i < snakeTailLen; i++) {
        if (snakeTailX[i] == x && snakeTailY[i] == y) gameover = 1;
    }

    // Check if snake eats fruit
    if (x == fruitx && y == fruity) {
        fruitx = rand() % WIDTH;
        fruity = rand() % HEIGHT;
        while (fruitx == 0) fruitx = rand() % WIDTH;
        while (fruity == 0) fruity = rand() % HEIGHT;
        score += 10;
        snakeTailLen++;
    }
}

// Main function
int main() {
    setup(); // Initialize game
    while (!gameover) {
        draw();  // Draw game state
        input(); // Handle input
        logic(); // Update game logic
        usleep(100000); // Sleep for 100ms (adjust speed here)
    }
    printf("Game Over! Final Score: %d\n", score);
    return 0;
}