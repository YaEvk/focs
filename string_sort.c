#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main()
{
	//字符指针数组，用于存储字符串
	char* names[30] ;
	int n;
	scanf("%d",&n);
	int i;
	for (i=0;i<n;i++)
	{
		names[i] = (char *) malloc(30 * sizeof(char));
		scanf("%s",names[i]);
	}
// 	stringsort(names);
	int j;
	for (i=0;i<n;i++)
	{
		bool flag = false;
		for (j=0;j<n-i-1;j++)
		{
			if (strcmp(names[j],names[j+1]) > 0)
			{
				char* temp = names[j];
				names[j] = names[j+1];
				names[j+1] = temp;
				flag = true;
			}

		}

		if(!flag)
		{
			break;
		}
	}

	for (i=0;i<n;i++)
	{
		printf("%s\n",names[i]);
	}

	return 0;
}
