// pattern output 
// 1
// 23
// 456
// 78910
#include<stdio.h>
#include<conio.h>
int main(){
  int a,b,c,d=a+1;
  printf ("Enter a Value = ");
  scanf("%d",&c);
  for(a=1;a<=c;a++)
  {
   for(b=1;b<=a;b++)
    {    
      printf("%d ",d);
      d=d+1;
    }
    printf("\n");
  }
getch();
return 0;
}