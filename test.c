#include <stdio.h>
#include <ctype.h>
#include <string.h>

char stack[20];
int top=-1;


int priority(char);
char peep();
int is_empty(char);
void push(char ch);



void strre(char s[],int len)
{
    char temp;
    for (int i = 0; i < len/2; i++)
    {
        temp=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=temp;
    }
    
}



int main()
{
    char infix[20]={'\0'};
    char rinfix[20]={'\0'};
    char postfix[20]={'\0'};
    int len, i=0,j=0, p;
    char ch;

    
    
    scanf("%s", infix);
    len= strlen(infix);

    strre(infix,len);
  
    printf("%s", infix);
}
