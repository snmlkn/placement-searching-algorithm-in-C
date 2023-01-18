#include <stdio.h>
#include <stdlib.h>
//QUICK SORT ALGORITMASI

void quicksort(int D[10],int ilk, int son)
{
    int gecici;
    int pivot;
    int i,j;

    if(ilk<son)
    {
        pivot=ilk;
        i=ilk;
        j=son;
        while(i<j)
        {
            while(D[i]<=D[pivot] && i<son)
            {
                i++;
            }
            while(D[j]>D[pivot])
            {
                j--;
            }
            if(i<j)
            {
                gecici=D[i];
                D[i]=D[j];
                D[j]=gecici;
            }
        }
        gecici=D[pivot];
        D[pivot]=D[j];
        D[j]=gecici;
        quicksort(D,ilk,j-1);
        quicksort(D,j+1,son);
    }
}


int main()
{
   int N;
   int i;

   printf("kac adet sayi girilecek:\n");
   scanf("%d",&N);

   int dizi[N];
   printf("elemanlari girin:\n");
   for(i=0;i<N;i++)
   {
       scanf("%d",&dizi[i]);
   }
   printf("\ndizinin elemanlari:\n");
   for(i=0;i<N;i++)
   {
       printf("%d\t",dizi[i]);
   }

    quicksort(dizi,0,N-1);

    printf("\nsiralanmis dizi:\n");
    for(i=0;i<N;i++)
   {
       printf("%d\t",dizi[i]);
   }
    return 0;
}
