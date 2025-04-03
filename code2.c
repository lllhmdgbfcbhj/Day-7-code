#include <stdio.h>
#include <string.h>

int main() {
    char s1[20], s2[20];

    printf("Enter elements in main string:\n");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter elements in sub string:\n");
    fgets(s2, sizeof(s2), stdin);

    // Remove newline character from fgets()
    s1[strcspn(s1, "\n")] = 0;
    s2[strcspn(s2, "\n")] = 0;

    char *p = strstr(s1, s2);

    if (p != NULL) {
        printf("String Found\n");
        printf("The sub string is: %s\n", s2);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
