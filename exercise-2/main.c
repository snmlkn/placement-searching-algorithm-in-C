#include <stdio.h>
#include <stdlib.h>
//SELECTION SORT SIRALAMA ALGORITMASI
int main()
{
    int N,i,j,location,temp;
    printf("how many number do you want to enter: ");
    scanf("%d",&N);
    int array[N];
    for(i=0;i<N;i++)
    {
        printf("number %d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("\nNUMBERS:\n");
    for(i=0;i<N;i++)
    {
        printf("number %d: %d \n",i+1,array[i]);
    }

    //selection sort sýralama algoritmasý
    for(i=0;i<(N-1);i++)
    {
       location=i;
       for(j=i+1;j<N;j++)
       {
           if(array[location]>array[j])
           {
               location=j;
           }
       }
       if(location!=i)
       {
          temp=array[i];
          array[i]=array[location];
          array[location]=temp;
       }
    }
    printf("\nsorted aray:\n");
    for(i=0;i<N;i++)
    {
        printf("%d\t",array[i]);
    }

    return 0;
}
