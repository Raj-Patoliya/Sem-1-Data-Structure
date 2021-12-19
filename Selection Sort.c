#include<stdio.h>
void main()
{
    int size;
    printf("\n\t Enter The Size Of Array  : ");
    scanf("%d",&size);
    int arr[size],temp,min;
    for (int i = 0; i < size; i++){
        printf("\n\tArray [%d] = ",i);
        scanf("%d",&arr[i]);    
    }
    for(int i = 0;i<size-1;i++){
        min = i;
        for(int j = i+1;j<size;j++){
            if(arr[j] < arr[min]){
                 min = j;
            }
        }
            temp = arr[i];
        	arr[i] = arr[min];
        	arr[min] = temp;
    }
    for (int i = 0; i <size; i++){
         printf("\t%d",arr[i]);
    }
}
