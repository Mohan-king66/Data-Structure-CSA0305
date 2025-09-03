#include <stdio.h>
#include <string.h>
int main() {
    char str[100]; int i,j; char t;
    printf("Enter string: ");
    scanf("%s", str);
    for(i=0;i<strlen(str);i++)
        for(j=i+1;j<strlen(str);j++)
            if(str[i]>str[j]) { t=str[i]; str[i]=str[j]; str[j]=t; }
    printf("Sorted string: %s\n",str);
    return 0;
}

