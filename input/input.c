#include "input.h"

struct input_str_data
{
	int len;
	char *str;	
};

/* input_str()
{
	struct input_str_data current_input_str_data = {1,NULL};
	char *str = NULL, c;
  int len = 1;
	*current_input_str_data.str  = (char*) malloc(sizeof(char));
	//printf("input string: ");
	while((c = getchar()) != '\n') {
		*current_input_str_data.str[len - 1] = c;
		len++;
		*current_input_str_data.str = (char*) realloc(str, len);
	}
	*current_input_str_data.str[len - 1] = '\0';
	//printf("%s (%d symbols)\n", str, len - 1);
	//free(str);
	//return 0;
	return str;

}*/

struct input_str_data * input_str()
{
  struct input_str_data * current_input_str_data = (struct input_str_data *) malloc(sizeof(struct input_str_data));
  current_input_str_data->len = 1;
  current_input_str_data->str = NULL;
  char c;

  (*current_input_str_data).str  = (char*) malloc(sizeof(char));
  
  while((c = getchar()) != '\n') {
		(*current_input_str_data).str[current_input_str_data->len - 1] = c;
		current_input_str_data->len++;
		(*current_input_str_data).str = (char*) realloc(current_input_str_data->str, current_input_str_data->len);
	}
  
  (*current_input_str_data).str[current_input_str_data->len - 1] = '\0';
  //printf("%c \n",current_input_str_data->str[0]);
  return current_input_str_data;
}

int get_len(struct input_str_data * data)
{
    return data->len;
}

char * get_str(struct input_str_data * data)
{
    return data->str;
}


/*int main() {
	printf("Введите строку: \n");
  struct input_str_data * current_input_str_data = input_str();
  printf("len: %d \n", current_input_str_data->len);
	//char* input_sring = input_str();
	//free (input_sring ); 
  
	return 0;
}*/