#include <bits/stdc++.h>
using namespace std;

// backtracking's example
void f(int i,int n){
	if(i>n) return;
	f(i+1,n);
	cout<<(n-i+1)<<" ";
}
int main(){
	int n;
	cin>>n;
	f(1,n);
	return 0;
}