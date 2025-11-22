//Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>

int main(){

char s[50];
printf("Enter the string: ");
fgets(s,sizeof(s),stdin);

for(int i = 0; s[i] != '\0'; i++){
    if(s[i]>='a' && s[i]<='z'){
        s[i] = s[i] - 32;
    }
}

printf("%s", s);
return 0;
}