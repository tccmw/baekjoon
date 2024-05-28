#include <stdio.h>

int main()
{
	int j;
	int i;
	int n;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=n-1;j>=n-i;j--){
			printf("*");
		}
		printf("\n");
	}
return 0;
}