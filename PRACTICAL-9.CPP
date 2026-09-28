#include <iostream>
using namespace std;

int main() {

    int graph[4][4] = {
        {0, 10, 6, 5},
        {10, 0, 15, 0},
        {6, 15, 0, 4},
        {5, 0, 4, 0}
    };

    int visited[4] = {0};
    int edges = 0;
    int total = 0;

    visited[0] = 1;

    cout << "Edges in Minimum Spanning Tree:\n";

    while (edges < 3) {

        int min = 999;
        int x = 0, y = 0;

        for (int i = 0; i < 4; i++) {
            if (visited[i]) {

                for (int j = 0; j < 4; j++) {

                    if (!visited[j] && graph[i][j] != 0 &&
                        graph[i][j] < min) {

                        min = graph[i][j];
                        x = i;
                        y = j;
                    }
                }
            }
        }

        cout << x << " - " << y << " = " << min << endl;

        total = total + min;
        visited[y] = 1;
        edges++;
    }

    cout << "\nTotal Minimum Weight cost = " << total << endl;

    return 0;
}
