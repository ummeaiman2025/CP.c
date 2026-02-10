#include <stdio.h>
int main() {
    char str[100];
    int v=0,c=0,d=0,s=0,i;
    gets(str);

    for(i=0; str[i]; i++) {
        if(str[i]==' ') s++;
        else if(str[i]>='0' && str[i]<='9') d++;
        else if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
                str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') v++;
        else c++;
    }
    printf("Vowels=%d Consonants=%d Digits=%d Spaces=%d",v,c,d,s);
    return 0;
}