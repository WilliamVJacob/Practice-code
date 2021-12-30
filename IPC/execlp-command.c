#include <unistd.h>
 
int main(void) {
  char *programName = "ls";
  char *arg1 = "-l";
  char *arg2 = ".";
 
  execlp(programName, programName, arg1, arg2, NULL);
 
  return 0;
}
