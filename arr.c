#include<stdio.h>
void main()
{
  int n,a[10],sum=0,i;
  printf("enter the number(must be less than 10)");
  scanf("%d",&n);
  if(n<10)
  {
    printf("enter the %d numbers",n);
    for(i=0;i<n;i++)
    {
      scanf("%d", &a[i]);
      sum=sum+a[i];

    }
    printf("sum=%d",sum);
  }
  else
  {
    printf("please enter a number<=10");
  }

}
