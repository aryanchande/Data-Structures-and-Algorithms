//Graph implementation using Adjacency Matrix
#include<stdio.h>
#define MAX 10 
int graph[MAX][MAX]; 
int main(){
    int vertices=4;
    graph[0][1]=1;
    graph[1][0]=1;

    graph[0][2] = 1;
    graph[2][0] = 1;

    graph[1][3] = 1;
    graph[3][1] = 1;

    graph[2][3] = 1;
    graph[3][2] = 1;
    printf("Adjacency Matrix:\n");
    for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            printf("%d ",graph[i][j]);
        }
        printf("\n");
    }

    return 0;
}