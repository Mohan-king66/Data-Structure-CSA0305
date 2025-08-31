#include <stdio.h>
#define SIZE 100

int q[SIZE], front=0, rear=0;

void enqueue(int x){ q[rear++]=x; }
int dequeue(){ return q[front++]; }
void display(){ for(int i=front;i<rear;i++) printf("%d ",q[i]); printf("\n"); }

int main() {
    int ch,val;
    while(1) {
        printf("1.Enqueue 2.Dequeue 3.Display 4.Exit: ");
        scanf("%d",&ch);
        if(ch==1){ printf("Enter value: "); scanf("%d",&val); enqueue(val);}
        else if(ch==2){ if(front==rear) printf("Empty\n"); else printf("Dequeued %d\n",dequeue());}
        else if(ch==3) display();
        else break;
    }
    return 0;
}

