#include <stdio.h>
#define SIZE 100

int stack[SIZE], top=-1;

void push(int x){ stack[++top]=x; }
int pop(){ return stack[top--]; }
int peek(){ return stack[top]; }

int main() {
    int ch,val;
    while(1) {
        printf("1.Push 2.Pop 3.Peek 4.Exit: ");
        scanf("%d",&ch);
        if(ch==1){ printf("Enter value: "); scanf("%d",&val); push(val); }
        else if(ch==2){ if(top==-1) printf("Empty\n"); else printf("Popped %d\n",pop()); }
        else if(ch==3){ if(top==-1) printf("Empty\n"); else printf("Top=%d\n",peek()); }
        else break;
    }
    return 0;
}

