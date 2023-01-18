#include <stdio.h>
#include <stdlib.h>
//BUBBLE SORT KULLANICIDAN ALINAN N ADET SAYININ SIRALANMASI
int main()
{
   int N,i,j,temp;
   printf("how many number do you want to enter\n");
   scanf("%d",&N);
   int array[N];
   printf("enter the %d elements:\n",N);
   for(i=0;i<N;i++)
   {
       printf("number %d: ",i+1);
       scanf("%d",&array[i]);
   }
   printf("elements:\n");
   for(i=0;i<N;i++)
   {
       printf("%d\t",array[i]);
   }
   printf("\nsorted elements:\n");

   for(i=0;i<N-1;i++)
   {
       for(j=0;j<N-1-i;j++)
       {
           if(array[j]>array[j+1])
           {
               temp=array[j];
               array[j]=array[j+1];
               array[j+1]=temp;
           }
       }
   }

   printf("\n");
   for(i=0;i<N;i++)
   {
       printf("%d\t",array[i]);
   }

    return 0;
}
