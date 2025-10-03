/* Task description:
Create a simple menu controlled program! The program stores a number with an initial value of n = 1. Then the program should print the actual value of n and the menu below. After the user selects a menu item (scanf()) the program should do whatever the user requested and print the value of n and the menu! These must be repeated as long as the user chooses anything but the Exit menu option! Use switch() and post-testing do ... while() loop.

printf("0. Restore the initial value (n = 1)\n"
       "1. Add 1\n"
       "2. Negate the number (+/-)\n"
       "3. Multiple by 2\n"
       "9. Exit\n");

Realize each operation in a (tiny) function that receives the value of n as a parameter and returns the modified value! Your main() can only call these functions to change the value of n.

*/


#include <stdio.h>

int Restore(int n) { return 1; }
int Add(int n) { return n + 1; }
int Negate(int n) { return -n; }
int Multiply(int n) { return n * 2; }


int main(){
    int n = 1;
    int choice;

    do {
        printf("\nCurrent value of n: %d\n", n);
        printf("0. Restore the initial value (n = 1)\n"
               "1. Add 1\n"
               "2. Negate the number (+/-)\n"
               "3. Multiple by 2\n"
               "9. Exit\n");

        printf("Select an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                n = Restore(n);
                break;
            case 1:
                n = Add(n);
                break;
            case 2:
                n = Negate(n);
                break;
            case 3:
                n = Multiply(n);
                break;
            case 9:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please select a valid option.\n");
        }

    } while (choice != 9);

  return 0;
}
