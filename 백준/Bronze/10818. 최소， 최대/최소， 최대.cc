#include <stdio.h>

int main(){
	int num,max,min,i;
	
	scanf("%d",&num);
    
	int	sum[num];
	
	for(i=0;i<num;i++){
		scanf("%d",&sum[i]);
	}
	min = sum[0];
	max = sum[0];
    for(i=0;i<num;i++){
        if(min > sum[i]){min=sum[i];}
		if(max < sum[i]){max=sum[i];}
    }
	printf("%d %d",min,max);
}