#include <stdio.h>
int main() {
    int a[5]={1,2,3,4,5}, b[5]={6,7,8,9,10}, c[10], i;
    for(i=0;i<5;i++) c[i]=a[i];
    for(i=0;i<5;i++) c[i+5]=b[i];
    printf("Merged array: ");
    for(i=0;i<10;i++) printf("%d ",c[i]);
    return 0;
}

