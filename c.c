#include <stdio.h>

int main() {
  int x;
  repet:
  printf("x= ");
  scanf("%d",&x);
  if(x<100)
   {
       if(x<10)
       {
           printf("bellow 10");
       }
       else
       {
           printf("above 10");
       }
   }
   else
   {
       printf("not in range\n");
   }
   goto repet;
   

    return 0;
}
