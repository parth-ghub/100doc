//Print each character of a string on a new line.
#include <stdio.h>
int main(){

char s[50];
printf("Enter the string: ");
fgets(s,sizeof(s),stdin);


for(int i = 0; s[i] != '\0'; i++){
    if(s[i] == '\n'){
        s[i] = '\0';
    break;
    }
    printf("%c\n",s[i]);


}
    return 0;
}