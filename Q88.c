//Replace spaces with hyphens in a string.
#include <stdio.h>
int main(){

char s[50];
printf("Enter the string: ");
fgets(s,sizeof(s),stdin);


for(int i = 0; s[i] !=0; i++){
    if(s[i] == ' '){
        s[i] = '/';
    }
}

printf("%s", s);

return 0;
}