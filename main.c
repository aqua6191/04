#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a;
    
    printf("input a year :");
    scanf("%i", &a);
    
    if((a%4==0 && a%100!=0) || (a%400==0))
    {
        printf("%i is leap year.\n",a);
    }
    else 
    {
        printf("%i is not leap year.\n",a);
    }
  system("PAUSE");	
  return 0;
}
