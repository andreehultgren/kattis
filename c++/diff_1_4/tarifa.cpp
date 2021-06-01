// Author:  Andree Hultgren
// Problem: Tarifa
// Source:  https://open.kattis.com/problems/tarifa

/*
Description:

Pero has negotiated a Very Good data plan with his internet provider. 
The provider will let Pero use up X megabytes to surf the internet per month. 
Each megabyte that he doesn’t spend in that month gets transferred to the next month and can still be spent. 
Of course, Pero can only spend the megabytes he actually has.

If we know how much megabytes Pero has spent in each of the first N months of using the plan, 
determine how many megabytes Pero will have available in the N+1 month of using the plan.

Input
The first line of input contains the integer X (1≤X≤100). 
The second line of input contains the integer N (1≤N≤100). 
Each of the following N lines contains an integer Pi (0≤Pi≤10000), 
the number of megabytes spent in each of the first N months of using the plan. 
Numbers Pi will be such that Pero will never use more megabytes than he actually has.

Output
The first and only line of output must contain the required value from the task.
*/

#include <iostream>
#include <cassert>
using namespace std;

int main() {
    // Initiate variables
    int mb_per_month, n_used_months, mb, mb_in_pool;

    // Set constants
    mb_in_pool  =   0;

    // Collect the data limit
    cin >> mb_per_month;
    assert(1 <= mb_per_month && mb_per_month <= 100 );

    // Collect number of previous months
    cin >> n_used_months;
    assert(1 <= n_used_months && n_used_months <= 100 );

    // Loop over previous months
    for (int i = 0 ; i<n_used_months ; i++){
        // Collect the data used
        cin >> mb;
        assert(0<=mb && mb <= min(10000,mb_per_month+mb_in_pool));

        // Add unused data to pool
        mb_in_pool  +=  mb_per_month-mb;
    }

    // Present the values
    cout << mb_in_pool+mb_per_month << endl;

    return 0;
}
