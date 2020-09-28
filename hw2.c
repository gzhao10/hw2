#include <stdio.h>

int main(){

  //testing variables
  char a = 21;
  char b = 'b';
  char test = 900;
  unsigned int x;
  unsigned short y = 50000;
  int z = 1 == 2;

  //testing printf
  printf("%d %c %c %s %d %d %d\n", a, b, test, "hi", x, y, z);
  //I had to use %d as a placeholder for a for it to print
  //test printed out '?'

  int size1 = sizeof(char);
  int size2 = sizeof(unsigned char);
  int ans = (size1 == size2);

  printf("%d\n", ans);
  //the size of char and unsigned char are the same




  return 0;
}
