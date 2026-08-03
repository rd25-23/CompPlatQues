#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
	int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
  
}

/*https://www.naukri.com/code360/problems/star-pattern_624933?interviewProblemRedirection=true&attempt_status=COMPLETED*/

