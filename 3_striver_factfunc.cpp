#include <bits/stdc++.h>
using namespace std;
// finding factorail of n using function recursion

int fact(int n){
	if(n==1) return 1;
	return n*fact(n-1);
}
int main(){

	int n;
	cin>>n;
	cout<<fact(n);
	return 0;
}