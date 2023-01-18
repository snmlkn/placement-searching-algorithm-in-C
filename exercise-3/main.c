#include <stdio.h>
#include <stdlib.h>
//INSERTION SORT ALGORITMASI
int main()
{
    int i,j,N,temp;
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

    for(i=1;i<N;i++)
    {
        j=i;
        while(j>0 && array[j]<array[j-1])
        {
            temp=array[j];
            array[j]=array[j-1];
            array[j-1]=temp;

            j--;
        }
    }
     printf("\nsorted aray:\n");
    for(i=0;i<N;i++)
    {
        printf("%d\t",array[i]);
    }


    return 0;
}
