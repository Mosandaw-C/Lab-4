/* Task description:
A twin prime is a prime number that is either 2 less or 2 more than another prime number - for example, either member of the twin prime pair (41, 43). 
In other words, a twin prime is a prime that has a prime gap of two.

The first couple of twin primes are (3, 5), (5, 7) and (11, 13). Write a C program to find the 60th twin prime! 
Extend the program to check whether the number between the twin primes has any digit equal to 5. 
Avoid code duplication, use functions wherever reasonable! Follow the top-down design methodology.
Top-down: when solving programming problems by breaking them down into smaller and smaller sub-problems until each one is trivial or known

*/


#include <stdio.h>

int HasDigitFive(int num) {
    while (num > 0) {
        if (num % 10 == 5) return 1;
        num /= 10;
    }
    return 0;
}

int IsPrime(int Num) {
    if (Num <= 1) return 0;  // 0 and 1 are not prime

    for (int i = 2; i * i <= Num; i++) {
        if (Num % i == 0) {
            return 0;  // Not prime
        }
    }
    return 1;  // Prime

}

int main() {
    int count = 0;
    int i = 3;

    while (1) {
        if (IsPrime(i) && IsPrime(i + 2)) {
            count++;
            if (count == 60) {
                printf("60th twin prime pair: (%d, %d)\n", i, i + 2);
                int between = i + 1;
                if (HasDigitFive(between)) {
                    printf("The number between them (%d) contains the digit 5.\n", between);
                } else {
                    printf("The number between them (%d) does NOT contain the digit 5.\n", between);
                }
                break;
            }
        }
        i++;
    }

    return 0;
}