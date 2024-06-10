#include <stdio.h>

int main(){
	int num,a,avg=0,d;
	
	scanf("%d",&num);
	int sum[num];
	
	for(int i=0;i<num;i++){
		scanf("%d",&sum[i]);
	}
	scanf("%d",&d);
	for(int i=0;i<num;i++){
		if(sum[i]==d){
		avg+=1;
		}
	}
	printf("%d",avg);
}