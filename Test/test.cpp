#include <gtest/gtest.h>
#include <stdio.h>

extern "C" {
    //#include "../input/input.h"
    #include "stack.h"
}

TEST(Test_of_stack,Empty_test){
  //Arrange
  
  unsigned int len = 10;
  struct stack_on_array * stack = create_stack(len);
  
  //Act

  
  //Accert
  //printf("%d \n",IsEmpty(stack));
}


TEST(Test_of_stack,Push_Top_Test){
  //Arrange
  //-------------------------
  unsigned int len = 10;
  //struct stack_on_array * stack = create_stack(len);
  struct stack_on_array * stack1 = create_stack(len);
  struct stack_on_array * stack2 = create_stack(len);
  struct stack_on_array * stack3 = create_stack(len);
  char str[] = "12345";
  
  //Act
  //-------------------------
  //printf("%u \n",sizeof(str)/sizeof(char));
  //char * input_str = str;
  /*
  for (int i = 0;i < sizeof(str)/sizeof(char) - 1; ++i)
    {
      printf("%s \n", str);
      printf("%c \n", str[i]);
      //Push(stack, &str[i]);
      //str -= 1;
      //printf("=================== \n");
      //printf("%s \n",Top(stack));
      //printf("=================== \n");
    }
  */
  //free(stack);
  
  Push(stack1, &str[0]);

  Push(stack2, &str[0]);
  Push(stack2, &str[1]);


  Push(stack3, &str[0]);
  Push(stack3, &str[1]);
  Push(stack3, &str[2]);
  
  //Accert
  //-------------------------
  
  EXPECT_STREQ(Top(stack1),"1");
  //printf("%s \n",Top(stack1));
  EXPECT_STREQ(Top(stack2),"2");
  //printf("%s \n",Top(stack2));
  EXPECT_STREQ(Top(stack3),"3");
  //printf("%s \n",Top(stack3));

  free(stack1);
  free(stack2);
  free(stack3);
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}