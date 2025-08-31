#include <stdio.h>
#include <ctype.h>
#define SIZE 100

char stack[SIZE]; int top=-1;

void push(char c){ stack[++top]=c; }
char pop(){ return stack[top--]; }
int prec(char c){ if(c=='+'||c=='-') return 1; if(c=='*'||c=='/') return 2; return 0; }

int main(){
    char exp[SIZE]; printf("Enter infix: "); scanf("%s",exp);
    for(int i=0;exp[i];i++){
        char c=exp[i];
        if(isalnum(c)) printf("%c",c);
        else if(c=='(') push(c);
        else if(c==')'){ while(top!=-1 && stack[top]!='(') printf("%c",pop()); pop(); }
        else { while(top!=-1 && prec(stack[top])>=prec(c)) printf("%c",pop()); push(c); }
    }
    while(top!=-1) printf("%c",pop());
    return 0;
}

