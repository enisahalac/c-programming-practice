#include <stdio.h>

int isPalindrome(int n) {
    int original = n, reverse = 0;

    while (n > 0) {
        reverse = reverse * 10 + (n % 10);
        n /= 10;
    }

    return original == reverse;
}

int isPalindromeRec(int n, int reverse) {
    if (n == 0) {
        return reverse;
    }

    return isPalindromeRec(n / 10, reverse * 10 + (n % 10));
}

int main () {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n)) {
        printf("Palindrome");
    }
    else {
        printf("Not palindrome");
    }

    return 0;
}