#include <stdio.h>
#include <stdlib.h>
struct Node { int data; struct Node* next; };
int main() {
    struct Node *head=NULL,*temp,*prev=NULL,*next=NULL; int i;
    for(i=1;i<=3;i++) {
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=i; temp->next=head; head=temp;
    }
    while(head){ next=head->next; head->next=prev; prev=head; head=next; }
    head=prev; temp=head;
    printf("Reversed list: ");
    while(temp){ printf("%d ",temp->data); temp=temp->next; }
    return 0;
}

