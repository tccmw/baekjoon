#include <stdio.h>

int main(){
    int x;
    int n;
    scanf("%d %d",&n, &x);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]<x)printf("%d ",a[i]);
    }
}