#include <stdio.h>
int i,j,N,graph[10][10];

void display(int a[10][10]){
	for (i=0;i<N;i++){
		printf("%d: ",i);
		for (j=0;j<N;j++){
			if (a[i][j]==1){
				printf("%d ",j);
			}
		}
		printf("\n");
	}
}
int main() {
    printf("Enter the number of vertices: ");
    scanf("%d", &N);
    printf("Enter the adjacency matrix: ");
    for (i=0;i<N;i++){
    	for (j=0;j<N;j++){
    		scanf("%d",&graph[i][j]);
		}
	}

    printf("Adjacency List:\n");
    display(graph);
    return 0;
}
