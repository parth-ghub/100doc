//Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){

char s[50];
printf("Enter the string: ");
fgets(s,sizeof(s),stdin);

char revs[50];
if(s[strlen(s)-1] == '\n'){
    s[strlen(s)-1] = '\0';
}
for(int i = 0; s[i] !=0; i++){
    revs[strlen(s) - i- 1] = s[i];
}
revs[strlen(s)] = '\0'; 
bool ispal = true;
for(int i = 0; s[i]!='\0';i++){
    if(s[i] != revs[i]){
        ispal = false;
        break;
    }
}

if(ispal){
    printf("Yes");
}
else{
    printf("No");
}

return 0;
}