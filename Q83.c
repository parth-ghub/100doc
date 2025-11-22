//Count vowels and consonants in a string.
#include <stdio.h>
#include <ctype.h> 
int main(){

char s[50];
printf("Enter the string: ");
fgets(s,sizeof(s),stdin);


int c = 0;
int v = 0;

for(int i = 0; s[i] != '\0'; i++){
    if(s[i] == '\n'){
        s[i] = '\0';
    break;
    }

    s[i] = tolower(s[i]);
    if(s[i]>='a' && s[i]<='z'){
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
        v++;
    }
    else{
        c++;
    }
}
}
printf("Consonants:%d\nVowels:%d", c , v);
return 0;
}

