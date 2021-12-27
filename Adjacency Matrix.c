#include<stdio.h>
int main()
{
	int num,temp,edge;
	printf("\n\t Enter The Numbers of Vertices : ");	    
	scanf("%d", &num);

	do
	{
		printf("\n\t Enter The Numbers of Edges : ");
    		scanf("%d", &edge);
	
		if(edge > (num*num) || edge <= 0)
		{
			printf("\n\t :: Please Enter Proper Edges::\n");
		}	
	}
	while(edge > (num*num) || edge < 0);
	int arr[num][num];
	int row[num],col[num];

   	for (int x = 0; x < edge; x++)
    	{
        	printf("\n\t Edge No %d \'s Row : ",x);
        	scanf("%d", &row[x]);
        	printf("\n\t Edge No %d \'s Column : ",x);
        	scanf("%d", &col[x]);
    	}
    for (int x = 0; x < num; x++)
    {
       
        for (int i = 0; i < num; i++)
        {     
            arr[x][i] = 0 ;
        }
    }
    for (int x = 0; x < edge; x++)
    {
        
        arr[row[x]][col[x]] = 1;
    }

        
        for (int i = 0; i < num; i++)
        {     
            printf("\n\t ");     
            for (int j = 0; j < num; j++)
            {
                printf(" %d ",arr[i][j]);    
            }
            
        }
    
    for (int s = 0; s < edge; s++)
    {
        printf("\n\t (%d  %d ) ",row[s],col[s]);
    }
    return 0;
}
