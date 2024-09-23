#include<stdio.h>
#include<ctype.h>
void push(char);
int priority(char);
char pop();
int top = -1;
char stack[50];

void main() {
    char infix[50];
    char ch;
    int i = 0, item;
    
    printf("Enter the expression: ");
    scanf("%s", infix);
    
    while (infix[i] != '\0') 
    {
        ch = infix[i];
        
        if (ch == '(') {
            push(ch);
        } 
        else if (isalnum(ch)) 
        {  
            
            printf("%c", ch);
        } 
        else if (ch == ')') 
        {
            while ((item = pop()) != '(') 
            {  
                printf("%c", item);
            }
        } 
        else {
            while (top != -1 && priority(stack[top]) >= priority(ch)) 
            {
                item = pop();
                printf("%c", item);
            }
            push(ch);
        }
        i++;
    }
    while (top != -1) {
        printf("%c", pop());
    }
}

void push(char ch) {
    if (top >= 49) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = ch;
    }
}

char pop() 
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    } else {
        char item = stack[top];
        top--;
        return item;
    }
}

int priority(char ch) {
    if (ch == '(')
        return 0;
    else if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    else 
        return 0;
}
