#include <bits/stdc++.h> 
using namespace std;

vector<string> printPatt(int n)
{
    vector<string> final;
    
    for(int i = 0 ; i < n ; i++){
        string row(n - i, '*'); 
        
        final.push_back(row);
    }
    return final;
}
/* https://www.naukri.com/code360/problems/pattern_ify_893282?interviewProblemRedirection=true&search=pattern&leftPanelTabValue=PROBLEM    */
