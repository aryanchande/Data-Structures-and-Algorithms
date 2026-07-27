#include <iostream>
#include <vector>
using namespace std;

int main() {
    int V = 5;

    vector<vector<int>> graph(V);

    graph[0].push_back(1);
    graph[0].push_back(2);

    graph[1].push_back(3);

    for(int i = 0; i < V; i++) {
        cout << i << " -> ";

        for(int neighbor : graph[i])
            cout << neighbor << " ";

        cout << endl;
    }

    return 0;
}