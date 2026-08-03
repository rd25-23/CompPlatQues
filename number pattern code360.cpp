#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
	int n,t;
	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<< i+j-1;
		}
		cout<<"\n";
	}
  
}


/*https://www.naukri.com/code360/problems/number-pattern_624932?interviewProblemRedirection=true&attempt_status=COMPLETED&count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM&customSource=studio_nav*/
