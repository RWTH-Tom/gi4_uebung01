#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

int main(int argc, char* argv[], char* envp[])
{
  char* var = getenv(argv[1]); //Variable Name must be first
  if(var) {
    printf("1\n");
    if(getopt(argc, argv, "v") != -1) {
      printf("%s\n", var);
    }
  }
  else printf("0\n");

  return 0;
}
