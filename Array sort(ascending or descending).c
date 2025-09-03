#include <stdio.h>
int main() {
    int n,i,j,temp;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    // Sorting ascending
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(a[i]>a[j]) {
                temp=a[i]; a[i]=a[j]; a[j]=temp;
            }

    printf("Ascending order: ");
    for(i=0;i<n;i++) printf("%d ",a[i]);

    printf("\nDescending order: ");
    for(i=n-1;i>=0;i--) printf("%d ",a[i]);
    return 0;
}

