#include <stdio.h>
#include <string.h>

int main() {
    char s1[20];

    printf("Enter a string: ");
    fgets(s1, sizeof(s1), stdin);  // Safer alternative to gets()
    
    // Remove the newline character if present
    s1[strcspn(s1, "\n")] = 0; 

    int i = 0;
    while (s1[i] != '\0') {
        printf("ASCII value of '%c' = %d\n", s1[i], s1[i]);  // Corrected format
        i++;
    }

    return 0;
}
