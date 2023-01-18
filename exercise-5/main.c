#include <stdio.h>
#include <stdlib.h>
//LINEER ARAMA ALGORITMASI
int main()
{
    int N;
    int i;
    int searched;


    printf("how many number do you want to enter your array:\n");
    scanf("%d",&N);

    int array[N];

    printf("enter your array elements:\n");
    for(i=0;i<N;i++)
    {
        printf("%d.Element: ",i+10);
        scanf("%d",array[i]);
    }
    printf("your Elements:\n");
    for(i=0;i<N;i++)
    {
        printf("%d.Element: %d\n",i+1,array[i]);
    }
    printf("which element will search:\n");
    scanf("%d",&searched);

    //arama algortitmasý

    for(i=0;i<N;i++)
    {
        if(array[i]==searched)
        {
            printf("%d :%d.Element",array[i],i+1);
            //break;
        }
    }
    if(i==N)
    {
        printf("%d not found in array",searched);
    }
    return 0;
}
