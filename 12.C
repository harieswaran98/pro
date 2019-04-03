#include<stdio.h>

int main() {
   int b=0,i,j,h[100],k[100],n,m;
   scanf("%d %d\n",&m,&n);
   for(i=0;i<m;i++)
   {
       scanf("%d",&h[i]);// printf("%d",h[i]);
   }
   for(i=0;i<n*2;i++)
   {
       scanf("%d ",&k[i]);//printf("%d",k[i]);
       i++;
       scanf("%d\n",&k[i]);//printf("%d",k[i]);
   }
   i=0;
   while(n)
   {
      b=0;
     
   for(j=k[i]-1;j<k[i+1];j++)
   {
    b=b+h[j]; //printf("%d",h[j]);
   }
    printf("%d\n",b);
   n--;
   i=i+2;
   }
   
  
  
}
