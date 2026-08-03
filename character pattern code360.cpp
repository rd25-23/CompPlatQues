#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int l = 65;
		l = l+i;
		for(int j=0;j<=i;j++){
			cout<<static_cast<char>(l);
			l = l + 1;
		}

		cout << "\n";
	}
}


/*https://www.naukri.com/code360/problems/character-pattern_626549?interviewProblemRedirection=true&attempt_status=COMPLETED&count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM&customSource=studio_nav/*
