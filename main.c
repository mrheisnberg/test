#include<stdio.h>
int main()
{
	char a[50],i,c=0;
	printf("enter statements");
	scanf("%s",a);
	for(i=0;a[i];i++)
	{
		if(a[i]=='')
		{
			c++;
			}
		
		}
		printf("%d total no is:",c);
	
	}