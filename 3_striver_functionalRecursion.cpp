#include <bits/stdc++.h>
using namespace std;

// using functional recursion, that return sum's value
int sum(int n){
	if(n==0) return 0;
	return n + sum(n-1);
	//  <- return 6 to main sum
	// 3 + sum(2) <- 3
	// 2 + sum(1) <- 1
	// 1 + sum(0) <- 0
	// 0
}

int main(){

	int n;
	cin>>n;
	cout<<sum(n);
	return 0;
}