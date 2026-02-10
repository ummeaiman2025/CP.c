#include <stdio.h>
int main() {
    char str[100], out[100];
    int seen[256]={0},i,j=0;
    gets(str);

    for(i=0;str[i];i++)
        if(!seen[str[i]]){
            out[j++]=str[i];
            seen[str[i]]=1;
        }
    out[j]='\0';
    printf("%s",out);
    return 0;
}