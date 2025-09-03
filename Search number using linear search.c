#include <stdio.h>
int main() {
    int n, key, i, found=0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements: ", n);
    for(i=0;i<n;i++) scanf("%d", &a[i]);

    printf("Enter number to search: ");
    scanf("%d", &key);

    for(i=0;i<n;i++) {
        if(a[i]==key) { found=1; break; }
    }
    if(found) printf("Found at index %d\n", i);
    else printf("Not found\n");
    return 0;
}

