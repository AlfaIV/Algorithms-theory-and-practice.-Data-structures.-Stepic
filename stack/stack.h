#ifndef STACK_C
  #define STACK_C
  
  #include <stdio.h>
  #include <stdlib.h>
  //#include "CException.h"

  struct stack_on_array;

  struct stack_on_array * create_stack(unsigned int len);
  void Push(struct stack_on_array * stack, char * data);
  void Pop(struct stack_on_array * stack);
  char * Top(struct stack_on_array * stack);
  _Bool IsEmpty(struct stack_on_array * stack);

  
#endif