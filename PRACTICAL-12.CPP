#include <iostream>
#include <algorithm>
using namespace std;

#define V 4
#define INF 99999

int graph[V][V] = {
    {0, 10, 15, 20},
    {10, 0, 35, 25},
    {15, 35, 0, 30},
    {20, 25, 30, 0}
};

int main() {
    int path[V - 1] = {1, 2, 3};
    int minCost = INF;

    do {
        int cost = graph[0][path[0]];
        for (int i = 0; i < V - 2; i++)
            cost += graph[path[i]][path[i + 1]];

        cost += graph[path[V - 2]][0];

        if (cost < minCost)
            minCost = cost;

    } while (next_permutation(path, path + V - 1));

    cout << "Minimum travel cost: " << minCost << endl;
    return 0;
}
