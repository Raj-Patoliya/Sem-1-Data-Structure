
/*Selection Sort*/
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

/*Bubble Sort*/
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

/*Insertion Sort*/

#include <stdio.h>  
int main(){  
    int a[6] = { 12, 31, 25, 8, 32, 17 };  
    int n = 6 ;  
    int j, temp;
    printf("\n\n\tBefore sorting array elements are - \n\n");  
    for (int i = 0; i < n; i++) 
    { 
        printf("%d ", a[i]);  
    }   
    for (int i = 1; i < n; i++) {  
        temp = a[i];  
        j = i - 1;  
        while(j>=0 && temp <= a[j])  
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
    }
    printf("\n\n\tAfter sorting array elements are - \n\n");    
    for (int i = 0; i < n; i++) {
            printf(" %d ", a[i]);
        }  
}    
