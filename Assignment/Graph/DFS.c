#include <stdio.h>
#include <stdlib.h>

struct node {
    int vertex;
    struct node *next;
};

struct node *list[10];
int visited[10];

void addEdge(int u, int v) {
    struct node *newnode = malloc(sizeof(struct node));
    newnode->vertex = v;
    newnode->next = list[u];
    list[u] = newnode;
}

void DFS(int v) {
    struct node *temp;
    printf("%d ", v);
    visited[v] = 1;

    for (temp = list[v]; temp != NULL; temp = temp->next)
        if (!visited[temp->vertex])
            DFS(temp->vertex);
}

int main() {
    int n, e, u, v, i;

    printf("Enter number of vertices and edges: ");
    scanf("%d%d", &n, &e);

    for (i = 0; i < n; i++)
        list[i] = NULL;

    for (i = 0; i < e; i++) {
        printf("Enter edge (u v): ");
        scanf("%d%d", &u, &v);
        addEdge(u, v);
        addEdge(v, u);
    }

    printf("DFS traversal: ");
    DFS(0);

    return 0;
}