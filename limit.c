#include<stdio.h>
void main()
{
  int i,a[10],l;
  printf("enter the limit:");
  scanf("%d",&l);
  printf("enter the element:");
  for(i=0;i<l;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=0;i<l;i++)
  {
  printf("%d",a[i]);
  }
  }
