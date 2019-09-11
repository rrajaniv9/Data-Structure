#include <stdio.h>
#include <stdlib.h>
char s[200];
int top=-1;

void push(char item)
{
    s[++top]=item;
}
char pop()
{
    return s[top--];
}
void simpleParanthesisBalance()
{
char str[200],item;
int i;
printf("Enter a string of paranthesis");
scanf("%s",str);
i=0;
while(str[i]='\0')
{
item=str[i];
if(item=='(')
{
    push(item);
}
else
    {
        pop();
    }
++i;
}
if(top==-1)
{
    printf("Balanced paranthesis");
}
else
{
    printf("non balanced paranthesis");
}
}
void main()
{
simpleParanthesisBalance();
getch();
}
