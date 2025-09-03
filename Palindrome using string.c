#include <stdio.h>
#include <string.h>
int main() {
    char str[100]; int i,flag=1;
    printf("Enter string: ");
    scanf("%s", str);
    for(i=0;i<strlen(str)/2;i++) {
        if(str[i]!=str[strlen(str)-i-1]) { flag=0; break; }
    }
    if(flag) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}

