#include<stdio.h>
#define MAXSIZE 10
int stack[MAXSIZE], top=-1;

void push();
void display();
void pop();

int main()
{
    int choice;
do{printf("Stack\n");
    printf("Push(1) \t Display(2) \t Pop(3) \t Exit(4)\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1: 
    push();
     break;

    case 2: 
    display(); 
    break;

    case 3: 
    pop(); 
    break;

    default: 
    printf("Enter a number between 1 to 4");
    }
  }while(choice!=4);
    
    return 0; 
}

  void push()
  {
    if(top==MAXSIZE-1)
    printf("Stack is full.\n");

    else
    {
    top++;
    printf("Enter an Element:\n");
    scanf("%d",&stack[top]);
    
    }
  }

  void display()
  {
    if(top==-1)
    printf("Stack is empty.\n");
    else
    {
    for(int i=top; i>=0; i--)
    {
    printf("%d\n",stack[i]);
    }
    }
  }

  void pop()
  {
    int n;
    if(top==-1)
    printf("Stack is empty\n");
    else
    {
    n=stack[top];
    top--;
    printf("Poped element is %d\n", n);
    }
  }