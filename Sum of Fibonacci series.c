#include <stdio.h>
int main() {
    int n, a=0,b=1,c,i,sum=1;
    printf("Enter number of terms: ");
    scanf("%d",&n);

    if(n==1) { printf("Sum = 0\n"); return 0; }
    if(n==2) { printf("Sum = 1\n"); return 0; }

    for(i=2;i<n;i++) {
        c=a+b;
        sum+=c;
        a=b; b=c;
    }
    printf("Sum of Fibonacci series: %d\n", sum);
    return 0;
}

