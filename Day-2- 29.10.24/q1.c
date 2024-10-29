#include <stdio.h>

int replaceDigits(int number) {
    int result = 0, place = 1;

    while (number > 0) {
        int digit = number % 10;
        if (digit == 0) {
            result += 1 * place;
        } else if (digit == 1) {
            result += 0 * place;
        } else {
            result += digit * place;
        }
        number /= 10;
        place *= 10;
    }

    return result;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int modifiedNumber = replaceDigits(number);

    
    printf("Modified number: %06d\n", modifiedNumber);

    return 0;
}
