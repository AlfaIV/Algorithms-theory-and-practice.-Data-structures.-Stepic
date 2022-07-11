#ifndef INPUT_C
  #define INPUT_C
  
  #include <stdio.h>
  #include <stdlib.h>

  struct input_str_data;
  struct input_str_data * input_str();

  int get_len(struct input_str_data * data);
  char * get_str(struct input_str_data * data);
  
  
#endif