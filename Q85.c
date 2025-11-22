//Reverse a string.
#include <stdio.h>
#include <string.h>
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
printf("%s",revs);

return 0;
}