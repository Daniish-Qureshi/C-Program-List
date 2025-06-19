#include <stdio.h>
#include <ctype.h>
#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char c) { stack[++top] = c; }
char pop() { return stack[top--]; }
char peek() { return stack[top]; }

int precedence(char op) {
    if(op == '^') return 3;
    if(op == '*' || op == '/') return 2;
    if(op == '+' || op == '-') return 1;
    return 0;
}

void infixToPostfix(char* exp) {
    char ch;
    for(int i = 0; (ch = exp[i]) != '\0'; i++) {
        if(isalnum(ch)) printf("%c", ch);
        else if(ch == '(') push(ch);
        else if(ch == ')') {
            while(top != -1 && peek() != '(')
                printf("%c", pop());
            pop(); // remove '('
        }
        else {
            while(top != -1 && precedence(peek()) >= precedence(ch))
                printf("%c", pop());
            push(ch);
        }
    }
    while(top != -1) printf("%c", pop());
}

int main() {
    char infix[SIZE];
    printf("Enter infix expression: ");
    scanf("%s", infix);
    printf("Postfix: ");
    infixToPostfix(infix);
    printf("\n");
}
