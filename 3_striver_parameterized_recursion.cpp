#include <bits/stdc++.h>
using namespace std;

// parametrized form to sum upto N -> which print the sum
void f(int n,int sum){

	if(n<1){
		cout<<sum;
		return;
	}
	f(n-1,sum+n);
	// f(2,3)-> f(1,5) -> f(0,6) -> print(6)
	//  come back to main and exit the execution
}
int main(void){

	int n,sum=0;
	cin>>n;
	f(n,sum);
	return 0;
}