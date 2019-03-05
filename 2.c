#include<stdio.h>
#include<conio.h>
void main()
{
    int a[200],i,j,n,t,k;
    scanf("%d\n",&n);
    scanf("%d\n",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
       if(a[i]>a[j])
        {
         t=a[i];
         a[i]=a[j];
         a[j]=t;
        }
    }
  for(i=0;i<k-1;i++)
  {
   printf("%d\n",a[i]);
  }
   getch();
}
