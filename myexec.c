#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char* argv[], char* envp[])
{
  int pid_t = fork();

  if(pid_t == 0) {
    printf("Child! Process ID: %d\n", pid_t);
    char* const argvChild[1] = {argv[1]};
    execv(argv[1], argvChild);
  } else {
    printf("Parent! Process ID of Child: %d\n", pid_t);
  }

  wait(NULL);
  return 0;
}
