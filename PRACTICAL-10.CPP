#include <iostream>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, w;
};

int parent[5];

int find(int x) {
    if (parent[x] == x)
        return x;
    return parent[x] = find(parent[x]);
}

void unite(int a, int b) {
    parent[find(a)] = find(b);
}

int main() {

    Edge edges[] = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

    int V = 4;
    int E = 5;

    // Sort edges by weight
    sort(edges, edges + E, [](Edge a, Edge b) {
        return a.w < b.w;
    });

    // Initialize parent
    for (int i = 0; i < V; i++)
        parent[i] = i;

    int totalCost = 0;

    cout << "Edges in Minimum Spanning Tree:\n";

    for (int i = 0; i < E; i++) {
        int u = edges[i].u;
        int v = edges[i].v;

        if (find(u) != find(v)) {
            cout << u << " - " << v
                 << " : " << edges[i].w << endl;

            totalCost += edges[i].w;
            unite(u, v);
        }
    }

    cout << "Total Cost = " << totalCost << endl;

    return 0;
}
