#include <bits/stdc++.h> 
void alphaPattern(int n)
{
    // Write your code here
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char(i+64);
        }
        cout<<"\n";
    }
}

/*https://www.naukri.com/code360/problems/alpha-pattern_893274?interviewProblemRedirection=true&search=pattern&leftPanelTabValue=PROBLEM&count=25&page=2&sort_entity=order&sort_order=ASC&customSource=studio_nav*/
