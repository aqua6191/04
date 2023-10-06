#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a;
    
    printf("input seconds :");
    scanf("%i", &a);
    
    printf("%i seconds - %i:%i \n", a, a/60, a%60);
    
  system("PAUSE");	
  return 0;
}
