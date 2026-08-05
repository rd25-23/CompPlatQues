#include <bits/stdc++.h> 
vector<string> numberPattern(int n)
{
	//type your code here
	vector<string> result;
	for(int i=1;i<=n;i++){
		string row="";
		for(int j=0;j<i;j++){
			row += to_string(i+j);
		}
		
		result.push_back(row);

	}
	return result;
	
}

/*https://www.naukri.com/code360/problems/number-pattern_893191?interviewProblemRedirection=true&attempt_status=NOT_ATTEMPTED&leftPanelTabValue=SUBMISSION&count=25&page=1&search=pattern&sort_entity=order&sort_order=ASC&customSource=studio_nav*/
