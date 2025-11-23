//Count spaces, digits, and special characters in a string.
#include <stdio.h>
int main(){

char s[50];
printf("Enter the string: ");
fgets(s,sizeof(s),stdin);

int spaces = 0, digits = 0, special = 0;
for(int i = 0; s[i] !=0; i++){
    if(s[i] >= '0' && s[i]<= '9'){
        digits++;
    }
    else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z' || s[i] == '\n')){
    
            continue;
    }
    else if(s[i] == ' ')
        spaces++;
    
    else{
        special++;
    }
}
    printf("Spaces:%d  Digits:%d  Special:%d",spaces,digits,special);

return 0;
}