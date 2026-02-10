#include <stdio.h>
int main() {
    char str[100];
    int i,j,k;
    gets(str);

    for(i=0;str[i];i++)
        for(j=i;str[j];j++){
            for(k=i;k<=j;k++) printf("%c",str[k]);
            printf("\n");
        }
    return 0;
}