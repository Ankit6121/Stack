#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int stack[100],n,top,i;
 void push(void);
 void  display(void);
 void pop(void);
int main()
{
    top=-1;
    printf("enter the how many element you want to insert in the stack max(100)");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
           push();
    }
    display();
    pop();
  printf("peek element\n");
  printf("%d",stack[top]);
    return 0;

}
void push()
{
    int number;
    printf("enter the number");
    scanf("%d",&number);
    if(top>=n-1){
        printf(" sorry sir stack is overflow!");
    }
    else{
        top++;
        stack[top]= number;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n\n element of the stack\n\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }else{
        printf("stack is empty\n");
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("it is condition of underflow");
    }
    else{
        printf("deleted element\n");
        printf("%d",stack[top]);
        top--;
    }
}