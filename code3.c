#include <stdio.h>
#include <string.h>

int isPalindrome(char s[20]) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        if (s[left] != s[right])
            return 0;
        left++;
        right--;
    }
    return 1;
}

int main() {
    char s[20];

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';  // Remove newline character

    printf("%d\n", isPalindrome(s));

    return 0;
}
