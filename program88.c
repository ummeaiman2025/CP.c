#include <stdio.h>
int main() {
    char str[100], out[100];
    int i,j=0;
    gets(str);

    for(i=0;str[i];i++)
        if(str[i]!=' ') out[j++]=str[i];
    out[j]='\0';

    printf("%s",out);
    return 0;
}