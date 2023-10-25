#include<stdio.h>
int stack[100],choice,i,n,top;
void push(void);
void pop(void);
void display(void);
int main()
{
    top=-1;
    int n;
    printf(" enter the size of the stack!\n");
    scanf("%d",&n);
    printf("enter the choice that you want to perform the operations:\n");
    printf("1.push \n 2.pop \n 3.display \n 4.Exit\n");
    do{
        printf("enter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
           push();
            break;
            }
            case 2:
            {
               // pop();
                break;
            }
            case 3:
            {
              //  display();
                break;
            }
            case 4:
            {
                printf("exit!");
                break;
            }
            default:
            {
               printf("enter the right choice!");
            }
        }
    }while(choice!=4);
}
void push()
{
    int x;
    printf("enter the element that you want to insert in the stack!");
    scanf("%d",&x);
    if(top>=n-1){
        printf("overflow");
    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("stack is empty");
    }
    else{
        printf("%d",stack[top]);
        top--;
    }
}
void display()
{
    if(top<=-1)
    {
        printf("stack is empty");
    }
    else{
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    }
}