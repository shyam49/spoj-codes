#include <stdio.h>
#include<string.h>
struct Stack {
	char data[400];
	int top;
};
void push(struct Stack *s,char c)
{
	s->data[++(s->top)]=c;
}
char pop(struct Stack *s)
{
	char c;
	c=s->data[s->top];
	s->top=s->top - 1;
	return c;
}
char top1(struct Stack *s)
{
	return s->data[s->top];
}
int isempty(struct Stack *s)
{
	if(s->top == -1)
	return 1;
	return 0;
}
int prio(char c)
{
	switch (c){
		case '(' :return 0;
		case '+':return 1;
		case '-':return 2;
		case '*':return 3;
		case '/':return 4;
		case '^':return 5;
	}
}
void intopost(char a[])
{
	int n;
	n=strlen(a);
	struct Stack stack;
	stack.top=-1;
	int i,k=0;
	char ex[400],c,next;
	for(i=0;i<n;i++){
		c=a[i];
		switch(c) {
			case '(':
						push(&stack,c);
						break;
			case ')':
						while ((next=pop(&stack))!='('){
							ex[k++]=next;
						}
						break;
			case '+':
			case '-':
			case '*':
			case '/':
			case '^':
						while(!isempty(&stack) && prio(top1(&stack))>prio(c)){
							ex[k++]=pop(&stack);
						}
						push(&stack,c);
						break;
			default :
						ex[k++]=c;
		}
	}
	while(!isempty(&stack))
	ex[k++]=pop(&stack);
	ex[k]='\0';
	printf("%s\n",ex);
}
int main(void) {
	// your code here
	int t;
	scanf("%d",&t);
	while(t--){
		char a[400];
		scanf("%s",a);
		intopost(a);
	}
	return 0;
}
