
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
/* Quick Sort*/
#include <stdio.h>
void Swap(int *x, int *y) {
    int Temp;
    Temp = *x;
    *x = *y;
    *y = Temp;
}
void quickSort(int a[], int first, int last) {
    int pivot, i, j;
    if(first < last) {
        pivot = first;
        i = first;
        j = last;
        while (i < j) {
            while(a[i] <= a[pivot] && i < last)
                i++;
            while(a[j] > a[pivot])
                j--;
            if(i < j) {
                Swap(&a[i], &a[j]);
            }
        }
        Swap(&a[pivot], &a[j]);
        quickSort(a, first, j - 1);
        quickSort(a, j + 1, last);
    }
}
int main() {
    int a[100], number, i;
    printf("\n Please Enter the total Number of Elements  :  ");
    scanf("%d", &number);
    for(i = 0; i < number; i++){
        printf("\n Array [%d] = ",(i+1));
        scanf("%d", &a[i]);
    }
    
    quickSort(a, 0, number - 1);
    printf("\n Selection Sort Result : ");
    for(i = 0; i < number; i++)  {
        printf("\t%d , ", a[i]);
    }
    printf("\n");
    return 0;
}

/* Merge Sort */

#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int low,int mid ,int high)
{
	int b[20];
	int i,j,k;
	i=low,j=mid+1,k=low;
	while(i<=mid && j<=high){
		if(a[i]<=a[j])
		    b[k++]=a[i++];
		else
		   b[k++]=a[j++]; 
	}
	while (i<=mid)
		b[k++]=a[i++];
	while 
		(j<=high) b[k++]=a[j++];
		for (k=low;k<=high;k++)
	        a[k]=b[k];
}
void mergesort(int a[],int low,int high){
	int mid;
	if(low>=high)
	  return;
	mid=(low+high)/2;
	mergesort(a,low,mid);
	mergesort(a,mid+1,high);
	merge(a,low,mid,high);
}
int main() {
	int a[7] = {83, 20, 9, 50, 115, 61, 17};
	int n = 7;
	mergesort(a, 0, n-1);
	printf("\n Sorted numbers are : \n");
	for(int k=0;k<7;k++)
	    printf("%d\t",a[k]);
	return 0;
}

