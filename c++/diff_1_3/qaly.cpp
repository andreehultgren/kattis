// Author:  Andree Hultgren
// Problem: Life-Year
// Source:  https://open.kattis.com/problems/qaly

#include <iostream>
#include <cassert>
using namespace std;

int main() {
    // Initiate variables
    int n_periods;
    float quality, years, total_quality;

    // Collect initial settings
    cin >> n_periods;
    assert(1 <= n_periods && n_periods <= 100);

    // Loop over all periods
    for(int i = 0 ; i<n_periods ; i++){

        // Collect the quality data of this period
        cin >> quality >> years;
        assert(0<quality && quality <= 1);
        assert(0<years && years <= 100);

        // Add the period quality to the total quality
        total_quality += quality*years;
    }

    // Return the results
    cout  << total_quality << endl;

    return 0;
}