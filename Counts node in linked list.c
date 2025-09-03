#include <stdio.h>
#include <stdlib.h>
struct Node { int data; struct Node *next; };
int main() {
    struct Node *head=NULL,*temp; int count=0,i;
    for(i=1;i<=3;i++) {
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=i; temp->next=head; head=temp;
    }
    temp=head;
    while(temp){ count++; temp=temp->next; }
    printf("Nodes: %d\n", count);
    return 0;
}

