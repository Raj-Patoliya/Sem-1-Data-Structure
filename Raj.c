#include<stdio.h>
int main()
{
    int num,arr[4][4];
    int row[4],col[4];
    printf("\n\t Enter The Numbers of edges : ");
    scanf("%d", &num);
    for (int x = 1; x <= num; x++)
    {
        printf("\n\t Edgs No %d \'s Row : ",x);
        scanf("%d", &row[x]);
        printf("\n\t Edgs No %d \'s Column : ",x);
        scanf("%d", &col[x]);
    }
    for (int x = 1; x <= 4; x++)
    {
        
        for (int i = 1; i <= 4; i++)
        {     
            arr[x][i] = 0 ;
        }
    }
    for (int x = 1; x <= num; x++)
    {
        
        arr[row[x]][col[x]] = 1;
    }

        
        for (int i = 1; i <= 4; i++)
        {     
            printf("\n\t");     
            for (int j = 1; j <= 4; j++)
            {
                printf(" %d ",arr[i][j]);    
            }
            
        }
    
    for (int s = 1; s <= num; s++)
    {
        printf("\n\t (%d  %d ) ",row[s],col[s]);
    }
    return 0;
}
