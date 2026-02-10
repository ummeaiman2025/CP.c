#include <stdio.h>
#include <ctype.h>
int main() {
    char str[200];
    int i,count=0,valid=1;
    gets(str);

    for(i=0; ; i++){
        if(isalpha(str[i])) valid=1;
        else{
            if(valid) count++;
            valid=0;
        }
        if(str[i]=='\0') break;
    }
    printf("Valid words = %d",count);
    return 0;
}