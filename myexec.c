#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[], char* envp[])
{
  execv(argv[1], 0);
  return 0;
}
