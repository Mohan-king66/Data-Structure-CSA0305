#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node* next; };
struct Node* head=NULL;

void insert(int x) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data=x; newNode->next=head; head=newNode;
}
void display() {
    struct Node* temp=head;
    while(temp) { printf("%d ",temp->data); temp=temp->next; }
    printf("\n");
}

int main() {
    int ch,val;
    while(1) {
        printf("1.Insert 2.Display 3.Exit: ");
        scanf("%d",&ch);
        if(ch==1){ printf("Enter value: "); scanf("%d",&val); insert(val);}
        else if(ch==2) display();
        else break;
    }
    return 0;
}

