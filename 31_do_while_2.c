#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    unsigned int seed = (unsigned int)time(0) ^ GetTickCount(); // XOR combination
    srand(seed);  // better seeding

    int randomNumber = rand() % 100;  // 0 to 99
    printf("Random Number between 0 and 99: %d\n", randomNumber);

    return 0;
}
