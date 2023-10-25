#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
void push(struct Stack*stack,int item);
int isFull(struct Stack* stack);
int isEmpty(struct Stack* stack);
int pop(struct Stack* stack);
int peek(struct Stack* stack);
struct Stack{
int top;
unsigned capacity;
int *array;
};
int main()
{
   struct Stack* stack= createStack(100);
   push(stack,10);
   push(stack,20);
   push(stack,30);
   printf("%d is poped from stack\n",pop(stack));
    printf(" top item is %d\n",peek(stack));

}
struct Stack* createStack(unsigned capacity){
  struct Stack* stack= ( struct Stack*)mallooc(sizeof(struct Stack));
   stack->capacity= capacity; 
   stack->array= capacity;
   stack->array= (int*)malloc(stack->capacity*sizeof(int));
   return stack;
}
void push(struct Stack*stack, int item){
 if(isFull(stack))
 {
   return;
 }
 stack->array[++stack->top]=item;
 printf("%d is pushed is the satck\n",item);
}
int isFull(struct Stack* stack)
{
   return stack->top== stack->capacity-1;
}
int isEmpty(struct Stack* stack)
{
   return stack->top==-1;
}
int pop(struct Stack* stack)
{
   if(isEmpty(stack))
   {
      return -1;
   }
   return stack->array[stack->top--];
}
int peek(struct Stack* stack)
{
  if(isEmpty(stack))
  {
    return -1;
  }
  return stack->array[stack->top];
}