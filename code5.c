#include <stdio.h>
#include <string.h>

int main() {
    char s1[20], temp;
    
    printf("Enter string: ");
    fgets(s1, sizeof(s1), stdin);
    
    // Remove trailing newline if exists
    size_t len = strlen(s1);
    if (len > 0 && s1[len - 1] == '\n') {
        s1[len - 1] = '\0';
        len--;  // Update length
    }

    int p = len - 1;
    
    // Reverse the string
    for (int i = 0; i < p; i++, p--) {
        temp = s1[i];
        s1[i] = s1[p];
        s1[p] = temp;
    }

    printf("The reversed string is: %s\n", s1);
    
    return 0;
}
