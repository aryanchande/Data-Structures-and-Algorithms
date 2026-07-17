//Why? Because Infix expression(exp.) are convenient for humans but difficult for computers to evaluate directly.
//Postfix exp. remove the need for precedence rules during evalution.
/*Why Stack? because it is used to temporarily store operators while scanning the infix exp. and operands are directly added to output also operators are pushed or popped based on precedence rules.
Pre-requsite:Knowledge of Operator precendence.
Algorithm:
1.Read the infix exp. from left to right.
2.for each character:
a) if operand -> Add to postfix exp.
b) if '(' -> push to stack.
c) if ')' -> pop from stack to postfix exp. until '(' is found and also pop '(' from stack.
d) if operator:
    while stack not empty and precedence(top)>=precedence(current operator)
    pop from stack to postfix exp.
    push current operator to stack.
3. pop all remaining operators from stack to postfix exp.
*/
//Program Code
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 100

char stack[MAX];
int top=-1;
void push(char x){
    stack[++top]=x;
}
char pop(){
    return stack[top--];
}
int precedence(char op){
    if(op=='^'){
        return 3;
    }
    else if(op=='*' || op=='/'){
        return 2;
    }
    else if(op=='+' || op=='-'){
        return 1;
    }
    else return 0;
}

int main(){
    char infix[MAX],postfix[MAX];
    int i,j=0;
    char ch;
    printf("Enter the infix exp. :");
    scanf("%s",infix);
    for(i=0;infix[i]!='\0';i++){
    ch=infix[i];
    if(isalnum(ch)){
        postfix[j++]=ch;
    }
    else if(ch=='('){
        push(ch);
    }else if(ch==')'){
        while(stack[top] !='('){
            postfix[j++]=pop();
        }
        pop();
    }
    else {
        while(top!=-1 && precedence(stack[top])>=precedence(ch)){
            postfix[j++]=pop();
        }
        push(ch);
    }
}
while (top!=-1){
    postfix[j++]=pop();
}
postfix[j]='\0';
printf("Postfix Expression : %s",postfix);
    return 0;
}

