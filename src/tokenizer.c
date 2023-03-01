#include <string.h>
#include <stdio.h>
#include "tokenizer.h"
#include "history.h"


int space_char(char c){
  if(c==(' ') || c=='\t') {
    return 1;}
  else{
    return 0;};

}


int non_space_char(char c){
  if(c==(' ') || c=='\t') {
    return 0;}
  else{return 1;};
}


char *word_start(char *str){
  while(non_space_char(*str) != 1){
    if(*str=='\0') {return NULL;}
    *str++;
  }
  //printf("%c", *str);
  return str;
}
