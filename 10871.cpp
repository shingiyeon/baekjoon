#include <stdio.h>
int main(){
	int a[10000];
	int N,X; scanf("%d%d",&N,&X);
	for(int i=0; i<N; i++)
		scanf("%d",&a[i]);
	for(int i=0; i<N; i++){
		if(a[i] < X){
			printf("%d ", a[i]);
		}
	}
}
