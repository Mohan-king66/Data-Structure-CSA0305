#include <stdio.h>
int main() {
    int n,i,sum=0,total;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements (1 to n+1 with one missing): ",n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    total = (n+1)*(n+2)/2;   // Sum of first (n+1) numbers
    printf("Missing element = %d\n", total-sum);
    return 0;
}

