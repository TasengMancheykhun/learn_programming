#include <stdio.h>
#include <string.h>

int main() {  // Use int main() instead of void main()
    char str[20], ch;
    int i, j, length = 0;

    printf("Enter a string: \n");
    scanf("%s", str);

    // Consume the newline character left by the previous scanf
    while ((getchar()) != '\n');

    printf("Enter starting character: \n");
    scanf("%c", &ch); 

    printf("Enter length of sub-string: \n");
    scanf("%d", &length);

    // Loop through the string
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            // Print the substring of specified length
            for (j = 0; j < length && str[i + j] != '\0'; j++) {
                printf("%c", str[i + j]);  // Print the character
            }
            printf("\n"); // New line after the substring
        }
    }

    return 0;  // Return 0 to indicate successful execution
}
