#include <stdio.h>

int main()
{
    int a[10],odd=0,even=0,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     {
      scanf("%d",&a[i]);
     if(a[i]%2==0)
      {
          even=even+a[i];
      }
     else
      {
          odd=odd+a[i];
      }
     }
     printf("even=%d",even);
     printf("odd=%d",odd);
}
