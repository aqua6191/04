#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int input;
  int sec, min, hour;
  
  printf("Input the second:");
  scanf("%d", &input);
  
  sec = input%60;
  min = (input%3600)/60;
  hour = input/3600;
  
  printf("The time for %d second is %d : %d :%d\n", input, hour, min, sec);
  
  system("PAUSE");   
  return 0;
}
