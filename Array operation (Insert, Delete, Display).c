#include <stdio.h>
#define SIZE 100

int main() {
    int arr[SIZE], n=0, choice, pos, val;
    while (1) {
        printf("\n1.Insert 2.Delete 3.Display 4.Exit: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter position and value: ");
            scanf("%d %d", &pos, &val);
            for (int i=n; i>pos; i--) arr[i]=arr[i-1];
            arr[pos]=val; n++;
        }
        else if (choice == 2) {
            printf("Enter position to delete: ");
            scanf("%d", &pos);
            for (int i=pos; i<n-1; i++) arr[i]=arr[i+1];
            n--;
        }
        else if (choice == 3) {
            for (int i=0; i<n; i++) printf("%d ", arr[i]);
            printf("\n");
        }
        else break;
    }
    return 0;
}

