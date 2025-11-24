//Toggle case of each character in a string.
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[50];
    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);

   
    for (int i = 0; s[i] != '\0'; i++) {
        if (islower(s[i])) {
            s[i] = toupper(s[i]);
        } else if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        }
    }

    printf("Toggled string: %s\n", s);
    return 0;
}
    