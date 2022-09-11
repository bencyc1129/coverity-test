#include <stdio.h>
#include <string.h>
int main() {
  char buff[10];
  int pass = 0;

  printf("Enter the password:\n");
  gets(buff);

  if(strcmp(buff, "gtwang")) {
    printf("Fail.\n");
  } else {
    printf("Pass.\n");
    pass = 1;
  }
  if(pass) {
    /* 取得更高的權限 */
    printf("You are root now.\n");
  }
  return 0;
}