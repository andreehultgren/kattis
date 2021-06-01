// Author:  Andree Hultgren
// Problem: Simon Says
// Source:  https://open.kattis.com/problems/simonsays

#include <iostream>
#include <cassert>
using namespace std;

int main() {
    // Initiate variables
    int n_statements;
    string statement;

    // Set constants
    string trigger  =   "Simon says ";

    // Collect number of statements
    cin >> n_statements;
    cin.ignore();

    for (int i = 0 ; i < n_statements ; i++){
        // Get statement
        getline(cin, statement);

        // Verify the length of input can contain the trigger
        if (statement.length() > trigger.length()){

            // If the trigger matches the initial statement
            if(statement.substr(0, trigger.length()) == trigger){

                // Then print it!
                cout << statement.substr(trigger.length(), statement.length()) << endl;
            }
        }
    }
    
    return 0;
}
