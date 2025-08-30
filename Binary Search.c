#include <stdio.h>

int main() {
    int arr[100], n, key, low=0, high, mid;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter sorted elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter number to search: ");
    scanf("%d",&key);
    high = n-1;
    while(low<=high) {
        mid=(low+high)/2;
        if(arr[mid]==key) { printf("Found at position %d\n", mid); return 0; }
        else if(arr[mid]<key) low=mid+1;
        else high=mid-1;
    }
    printf("Not found\n");
    return 0;
}

