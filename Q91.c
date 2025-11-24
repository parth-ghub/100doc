//Remove all vowels from a string.
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[50];
    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);

        
    char result[50];
    int j = 0;
    
    for(int i = 0; s[i] != '\0'; i++){
        char ch = tolower(s[i]);
        
        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'){
            result[j] = s[i];
            j++;
        }
    }
    
    result[j] = '\0';
    
    printf("%s", result);
    
    return 0;
}