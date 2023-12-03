#include <stdio.h>

int joshlee(int x, int y){
  return x + y;
}

int main(){
  int x, y;
  
  printf("Enter first number: ");
  scanf("%d", &x);
  printf("Enter second number: ");
  scanf("%d", &y);
  
  printf("The sum is %d", joshlee(x, y));
  

  return 0;
}
