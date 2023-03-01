#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"




void main() {

  int max = 100;
  char str[max];  //the limit is  100 char
  putchar('$');
  fgets( str, max, stdin);
  puts( str );



}
