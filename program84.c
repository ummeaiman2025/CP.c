#include <stdio.h>
int main() {
    char str[100], rev[100];
    int i,len=0;
    gets(str);

    while(str[len]) len++;
    for(i=0;i<len;i++)
        rev[i]=str[len-i-1];
    rev[i]='\0';

    printf("%s", rev);
    return 0;
}