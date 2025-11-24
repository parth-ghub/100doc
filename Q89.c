//Count frequency of a given character in a string.
#include <stdio.h>

int main(){
    char s[50];
    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);
    
    char ch;
    printf("Enter character to count: ");
    scanf("%c", &ch);
    
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == ch){
            count++;
        }
    }
    
    printf("Frequency of '%c': %d\n", ch, count);
    
    return 0;
}