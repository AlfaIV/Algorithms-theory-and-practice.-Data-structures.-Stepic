#include "input/input.h"
#include "stack/stack.h"
#include <stdio.h>
#include <string.h>
//#include <stdlib.h>



int main()
{
  struct input_str_data * input_data = input_str();
  
  /*
  int * len_data = (int *) input_data;
  printf("%d \n",*len_data);
  printf("%d \n",get_len(input_data));
  printf("%s \n",get_str(input_data));
  char * data_sequnce = len_data + sizeof(int);
  */

  //input data
  char * input_str = (char *) get_str(input_data);
  int len_input_str = (int) get_len(input_data);
  //printf("%s \n",get_str(input_data));
  
  //create stack
  struct stack_on_array * stack = create_stack(len_input_str);
  
  
  
  for(int i = 0; i < len_input_str - 1;i++)
  {
    
    //printf("%d \n",i);
    //printf("%c \n",input_str[i]);

    if (input_str[i] == '[' || input_str[i] == '{' || input_str[i] == '(')
    {
      //printf("%c \n",input_str[i]);
      Push(stack, &input_str[i]);
    }else
    {
      char * top_of_stack = Top(stack);
      //printf("%c \n",input_str[i]);
      printf(" == %s == \n",top_of_stack);
    }
    
    /*switch(input_str[i])
    {
      case '{':
        printf(" {} \n");
        Push(stack, &input_str[i]);
        break;
      case '[':
        printf(" [] \n");
        break;
      case '(':
        printf(" () \n");
        break;
    }*/
    
  }
  

  
  free(input_data);
  free(stack);
  return 0;
}