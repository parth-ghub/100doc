//Count characters in a string without using built-in length functions.
#include <stdio.h>
int main(){

char s[50];
printf("Enter the string: ");
fgets(s,sizeof(s),stdin);

int count = 0;
for(int i = 0; s[i] != '\0' ; i++){
    count++;
}
if(count > 0 && s[count-1] == '\n'){
    count--;
}

printf("%d", count);
    
    return 0;
}