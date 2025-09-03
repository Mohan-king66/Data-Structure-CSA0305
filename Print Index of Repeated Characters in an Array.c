#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter size of array: ");
    scanf("%d",&n);
    char a[n];
    printf("Enter %d characters: ",n);
    for(i=0;i<n;i++) scanf(" %c",&a[i]);

    printf("Repeated characters and their indices:\n");
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]==a[j]) {
                printf("Character '%c' repeated at indices %d and %d\n", a[i], i, j);
            }
        }
    }
    return 0;
}

