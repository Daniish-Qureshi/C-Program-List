#include <stdio.h>
#include <string.h>
#define SIZE 100
char stack[SIZE];
int top = -1;

void push(char c) { stack[++top] = c; }
char pop() { return top == -1 ? -1 : stack[top--]; }

int isBalanced(char* exp) {
    for(int i = 0; exp[i]; i++) {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            push(exp[i]);
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            char open = pop();
            if((exp[i] == ')' && open != '(') ||
               (exp[i] == '}' && open != '{') ||
               (exp[i] == ']' && open != '['))
                return 0;
        }
    }
    return top == -1;
}

int main() {
    char exp[SIZE];
    printf("Enter expression: ");
    scanf("%s", exp);
    if(isBalanced(exp)) printf("Balanced\n");
    else printf("Not Balanced\n");
}
