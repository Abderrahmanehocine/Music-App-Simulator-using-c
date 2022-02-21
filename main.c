#include "generateCode//generate/generateCode.h"
extern int generate();

int main(){
  clrscreen(); // clear screen
  int prog;
  prog=generate();
  while(prog != 0){
    main(); // recursion 
  } // the programme still working until the user type 0
  return 0;
}