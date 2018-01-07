#include <stdio.h>
int main()
{
	int a[100][100];
	int m,n,i,j,t,s;
	scanf("%d%d",&m,&n);
	s=1;
	for(t=2;t<=(m+n);t++)
	{    
	   if((t%2)==0) 
		for(j=1;j<t;j++)
		  {
		  	i=t-j;
		  	if((i<=m)&&(j<=n))
		    {
		    	a[i-1][j-1]=s;
		    	s++;
			}		  			  	
		  }
	  if((t%2)==1)	
	    for(i=1;i<t;i++)
		{
			j=t-i;
			if((i<=m)&&(j<=n))
			{
				a[i-1][j-1]=s;
				s++;
			}
		  }  		
	}	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;	
 } 

