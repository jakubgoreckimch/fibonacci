#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  int w,x1,x2;
  x1 = 1;
  x2 = 0;

  for(int i = 0; i < n; i++){
    w = x1 + x2;
    printf("%d\n",x2);   
    x2 = x1;
    x1 = w;
 
  }
  return 0;
}
