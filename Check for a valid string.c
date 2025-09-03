#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int i, valid = 1;
    printf("Enter string: ");
    scanf("%s", str);
    for(i=0; str[i]!='\0'; i++) {
        if(!isalpha(str[i])) {
            valid = 0; break;
        }
    }
    if(valid) printf("Valid string\n");
    else printf("Invalid string\n");
    return 0;
}

