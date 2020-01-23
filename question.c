#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[100],b[100];
	int i,j,k,l1,l2,count=0;
	printf("enter string a\n");
	gets(a);
	printf("enter string b\n");
	gets(b);
	l1 = strlen(a);
	l2 = strlen(b);
	for (i=0;i<l2;i++)
	{
		count=0;
		for(j=0;j<l1;j++)
		{
			if(b[i]==a[j])
			{
				count=1;
				break;
			}
		}
		if(count==0)
		{
			printf("false\n");
			return 0;
		}
	}
	printf("True\n");
	
}
