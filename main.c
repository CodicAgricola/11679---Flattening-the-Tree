#include<stdio.h>

int a[1024];

void find_seq(int root, int node) {
	if(root>node/2)	{
		if(root == node) printf("%d\n", a[root]);
		else printf("%d ", a[root]);
	}
	else {
		find_seq(2*root, node);
		printf("%d ", a[root]);
		find_seq(2*root+1, node);
	}
}

int main(void) {
	int N;
	int i, j;
	
	scanf("%d", &N);
	for(i = 1; i<=N; i++) {
		scanf("%d", &a[i]);
	}
	
	find_seq(1, N);
	
	return 0;
}
