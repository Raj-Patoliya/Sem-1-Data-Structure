#include<stdio.h>
int main()
{
    int num;
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
    for (int x = 1; x <= num; x++)
    {
        
        for (int i = 1; i <= 4; i++)
        {     
            printf("\n\t");     
            for (int j = 1; j <= 4; j++)
            {
               if (row[x] == i && col[x] == j)
               {
                   printf(" 1 ");
               }
               else
               {
                   printf(" 0 ");
               }
            }
            
        }
    }
    for (int x = 1; x <= num; x++)
    {
        printf("\n\t (%d  %d ) ",row[x],col[x]);
    }
    return 0;
}