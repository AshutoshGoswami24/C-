/* Basic Arithmetic Calculator
   by https://github.com/AshutoshGoswami24/C
   This program performs basic arithmetic operations 
   such as addition, subtraction, multiplication, 
   division, and modulus on two integer inputs.
*/
#include<stdio.h>
int main(){
  int a,b,diff,q,r;
  long sum, p;
  puts("input two int values");
  scanf("%d %d",&a,&b);
      sum=a+b;
      diff=a>b?a-b:b-a;
      p=a*b;
      q=a>b?a/b:b/a;
      r=a>b?a%b:b%a;
  printf("\n A=%d B=%d",a,b);
  printf("\n sum=%ld\n diff=%d\n prod=%ld\n q=%d\n R=%d",sum,diff,p,q,r);
  puts("\npress Enter to continue");
  getchar();
return 0;
}
