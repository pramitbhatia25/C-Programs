#include <stdio.h>

//Compare sum of array using pointers

int large_sum(int *a,int *b,int n)
{
    int i,s1=0,s2=0;
    for (i=0;i<n;i++)
    {
        s1+=a[i];  //ARRAY 1 SUM
        s2+=b[i];  //ARRAY 2 SUM
    }
    if (s1==s2)
      return 0;
    else if (s1>s2)
        return 1;
    else
        return 2;
    
}

int main()
{
	int x[5],y[5],g,i,j;
    	
    	printf("Enter values of Array X : \n");
	for(i=0;i<5;i++)
    	{
    		printf("Enter value %d : ", i);
		scanf("%d",&x[i]);
    	}
	
	printf("Enter values of Array Y : \n");	
    	for(j=0;j<5;j++)
    	{
    	    	printf("Enter Value %d : ", j);
    		scanf("%d",&x[j]);
    	}
    	
    	g=large_sum(x,y,10);
    	
    	if(g==0)
    	{
   		printf("Both sum are equal\n");
   	}
    	else if (g==1)
    	{
      		printf("X is greater than Y\n");
      	}
  	else
  	{
      		printf("Y is greater than X\n");
      	}
      	
      	return 0;
  
}
