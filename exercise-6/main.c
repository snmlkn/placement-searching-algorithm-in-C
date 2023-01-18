#include <stdio.h>
#include <stdlib.h>
//BINARY ARAMA ALGORITMASI
/*
kullan�c�dan eleman say�s�n� al
kullan�c�dan elemanlar� al
kucukten buyuge s�rala
aranacak eleman� sor
binary algoriymas� ile aranan eleman�n s�ras�n� bast�r
*/
int main()
{
    int N;
    int i,j;
    int searched;
    int temp;
    int first,last,mid;

    printf("how many number do you want to enter your array:\n");
    scanf("%d",&N);

    int array[N];

    printf("enter your array elements:\n");
    for(i=0;i<N;i++)
    {
        printf("%d.Element: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("your Elements:\n");
    for(i=0;i<N;i++)
    {
        printf("%d.Element: %d\n",i+1,array[i]);
    }
    //kucukten buyuge s�ralama
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
    //s�ralanm�s dizi
     printf("your sorted Elements:\n");
    for(i=0;i<N;i++)
    {
        printf("%d.Element: %d\n",i+1,array[i]);
    }
    //aranacak eleman�n girilmesi
    printf("which element will search:\n");
    scanf("%d",&searched);
    //binary arama algoritmas�

    first=0;
    last=N-1;
    mid=(first+last)/2;

    while(first<=last)
    {
      if(array[mid]<searched)
      {
          first=mid+1;
      }
      else if(array[mid]==searched)
      {
          printf("%d. element %d ",mid+1,searched);
          break;
      }
      else
      {
          last=mid-1;
      }
      mid=(first+last)/2;
    }
    if(first>last)
    {
        printf("%d element not found",searched);
    }




    return 0;
}
