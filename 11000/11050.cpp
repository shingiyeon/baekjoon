#include <stdio.h>
long long dy[10][10];

long long d(int a, int b){
	if(a<0 || b<0) return 0;
	if(dy[a][b]!=-1) return dy[a][b];
	if(a==b) return dy[a][b] = 1;
	if(b==1) return dy[a][b] = a;
	return dy[a][b] = (d(a-1,b-1) + d(a-1,b));

}

int main(){
	int N, K; scanf("%d%d",&N,&K);
	for(int i=0; i<=N; i++){
		for(int j=0; j<=K; j++){
			dy[i][j] = -1;
		}
	}
	printf("%lld",d(N,K));
}