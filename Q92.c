//Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
#include <ctype.h>

int main() {
    char s[50];
    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);

    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            for(int j = i + 1; s[j] != '\0'; j++){
                if(s[i] == s[j]){
                    printf("First repeating lowercase letter: %c\n", s[i]);
                    return 0;
                }
            }
        }
    }
    printf("No repeating lowercase letter found\n");
    return 0;
}