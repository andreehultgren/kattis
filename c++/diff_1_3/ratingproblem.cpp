// Author:  Andree Hultgren
// Problem: Rating Problem
// Source:  https://open.kattis.com/problems/ratingproblems

#include <iostream>
using namespace std;

int main() {
    // Initiate variables
    int total_judges, decided_judges, undecided_judges, rating;
    float max_possible_score, min_possible_score;
    
    // Assign constants
    float total_score   =    0;
    int min_rating      =   -3;
    int max_rating      =    3;

    // Collect initial settings
    cin >> total_judges >> decided_judges;
    undecided_judges    =   total_judges-decided_judges;

    // Collect ratings of decided judges
    for(int i = 0 ; i<decided_judges ; i++){
        cin >> rating;
        total_score += rating;
    }

    // Compute maximum and minimum total score
    max_possible_score  =   (total_score + max_rating*undecided_judges)/total_judges;
    min_possible_score  =   (total_score + min_rating*undecided_judges)/total_judges;

    // Present the results
    cout << min_possible_score << " " <<max_possible_score << endl;

    return 0;
}