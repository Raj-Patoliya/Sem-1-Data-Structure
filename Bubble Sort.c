#include<stdio.h>
void main()
{
    int size;
    printf("\n\t Enter The Size Of Array  : ");
    scanf("%d",&size);
    int arr[size],temp;
    for (int i = 0; i < size; i++)
    {
        printf("\n\tArray [%d] = ",i);
        scanf("%d",&arr[i]);    
    }
    for(int i = 0;i<size;i++)
    {
        for(int j = 0;j<=i;j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i <size; i++)
    {
         printf("\t%d",arr[i]);
    }
}
