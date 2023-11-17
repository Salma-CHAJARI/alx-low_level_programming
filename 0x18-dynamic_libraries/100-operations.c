#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float div(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Division by zero is not allowed\n");
        return 0;
    }
}

int mod(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        printf("Modulo by zero is not allowed\n");
        return 0;
    }
}
