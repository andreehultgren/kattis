// Author:  Andree Hultgren
// Problem: Weak Vertices
// Source:  https://open.kattis.com/problems/weakvertices

#include <iostream>
#include <cassert>
using namespace std;

int main() {
    // Collect number of vertices
    int n_vertices;
    cin >> n_vertices;
    assert(1<=n_vertices && n_vertices <=20);


    int adj_matrix [n_vertices][n_vertices];
    for(int i = 0 ; i < n_vertices ; i++){
        for(int j = 0 ; j < n_vertices ; j++){
            cin >> adj_matrix[i][j];
        }
    }

    return 0;
}
