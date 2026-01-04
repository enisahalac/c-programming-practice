#include <stdio.h>

int numOfOcc(int number, int value) {
    int count = 0;
    
    int temp = number;
    while (temp != 0) {
        if (temp % 10 == value) {
            count++;
        }
        temp = temp / 10; 
    }

    return count;
}

int numOfOccRec(int number, int value) {
    if (number == 0) {
        return 0;
    }
    
    int lastDigit = number % 10;
    if (lastDigit == value) {
        return 1 + numOfOccRec(number / 10, value);
    }
    else {
        return numOfOccRec(number / 10, value);
    }
}

int main () {
    int number, value;
    
    printf("Enter a num: ");
    scanf("%d", &number);
    
    
    printf("Enter a num for check: ");
    scanf("%d", &value);
    
    printf("%d", numOfOccRec(number, value));
    
    return 0;
}