#include <stdio.h>
int main() {
    int a[7]={1,3,2,3,4,5,1}, i, j;
    printf("Duplicates: ");
    for(i=0;i<7;i++) {
        for(j=i+1;j<7;j++) {
            if(a[i]==a[j]) printf("%d ",a[i]);
        }
    }
    return 0;
}

