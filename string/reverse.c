#include<stdio.h>
int main()
{
   char name[7]="Mahadev";
   char rev[7];
   int i,j;
   for(i=0,j=6;i<7;i++,j--)
   {
    rev[i]=name[j];
   }
   for(i=0;i<7;i++)
   {
    printf("%c",rev[i]);
   }
   return 0;
}
