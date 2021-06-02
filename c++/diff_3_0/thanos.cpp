// Author:  Andree Hultgren
// Problem: Thanos
// Source:  https://open.kattis.com/problems/thanos

#include <iostream>
using namespace std;

int main() {
    // Collect matrix size
    long n_planets, years, population, growth, food;
    cin >> n_planets;

    while(n_planets--){
        cin >> population >> growth >> food;
        years = 0;
        while(population <= food){
            population *= growth;
            years++;
        }
        cout << years << endl;

    }
    return 0;
}