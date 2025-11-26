//Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
int main() {
    char s[50];
    printf("Enter a string: ");
    fgets(s,sizeof(s),stdin);

    int Cap = 1;

    for(int i =0; s[i]!='\0';i++){
        if(s[i]>='a' && s[i]<= 'z' || s[i]>='A' && s[i]<= 'Z'){

        if(s[i]>= 'a' && s[i] <= 'z'){
            if(Cap){
                s[i] -= 32;
                Cap = 0;
            }
        }
        else if(s[i]>='A' && s[i]<= 'Z'){
            if(Cap == 0){
                s[i] += 32;
            }
        }

        if(s[i] == '.'){
            Cap = 1;
        }

    }
}

printf("Sentence case: %s", s);
    return 0;
}