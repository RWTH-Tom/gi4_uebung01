#include <stdio.h>

int main(int argc, char* argv[], char* envp[])
{
  int i = 0;
  while(envp[i]) {
    printf("%s\n", envp[i]);
    i++;
  }
  printf("\nCount: %d\n", i);
  return 0;
}
