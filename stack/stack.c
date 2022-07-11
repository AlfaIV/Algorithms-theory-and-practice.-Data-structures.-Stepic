#include "stack.h"

///this realization of the stack
//lie on the assumption that
////length of massive which generated the stack
////less than the stack data

struct stack_on_array
{
  //the structure store the height 
  //and top of stack
  //also length of massive which generated this stack
  int len;
  char * top;
  int len_of_array;
};

struct stack_on_array * create_stack(unsigned int len)
{
  //this function create a array for stack with defined lengh
  //and return pointer for first element
  struct stack_on_array * current_stack = (struct stack_on_array *) malloc(sizeof(struct stack_on_array));

  char * array_for_stack = malloc(sizeof(char)*len);
  //array_for_stack = "a";
  //array_for_stack += 1;
  //array_for_stack = "b";
  
  current_stack->len = 0;
  current_stack->top = array_for_stack;
  current_stack->len_of_array = len;

  return current_stack;
}

void Push(struct stack_on_array * stack, char * data)
{
  if(stack->len == 0)
  {
    stack->top = data;
  }else
  {
    stack->top += sizeof(char);
    stack->top = data;
  }
  //stack->top = data;
  stack->len += 1;
  
  //printf("%p \n", stack->top);
  //printf("%s \n", stack->top);
  //printf("%d \n", stack->len);
}

void Pop(struct stack_on_array * stack)
{
  stack->top -= (sizeof(char) + 0b1);
  //stack->top = data;
  stack->len -= 1;
  //printf("%p \n", stack->top);
  //printf("%s \n", stack->top);
  //printf("%d \n", stack->len);
}

char * Top(struct stack_on_array * stack)
{
  char * data_top_of_stack = stack->top;
  return data_top_of_stack;
}

_Bool IsEmpty(struct stack_on_array * stack)
{
  if (stack->len == 0)
  {
    return 1;
  }else
  {
    return 0;
  }
}


/*
int main()
{
  int len_of_arr = 10;
  struct stack_on_array * stack = create_stack(len_of_arr);
  Push(stack, "a");
  Push(stack, "b");
  printf("%s \n",Top(stack));
  printf("-------------------- \n");
  Pop(stack);
  Push(stack, "d");
  Push(stack, "f");
  Pop(stack);
  printf("%s \n",Top(stack));
  printf("%s \n",Top(stack));
  
  
  
  printf("============ \n");
  Pop(stack);
  printf("%s \n",Top(stack));
  printf("%ld \n", sizeof(char));
  
  return 0;
}

*/