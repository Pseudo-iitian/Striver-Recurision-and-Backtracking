#include <bits/stdc++.h>
using namespace std;

// print number of s == sum, return count
int func(int i,vector<int> &ds,int s,int sum,int n){

	if(i==n){
		if(s==sum) return 1;
		return 0;
	}

	s+=ds[i];	
	int l = func(i+1,ds,s,sum,n);
	s-=ds[i];
	int r = func(i+1,ds,s,sum,n);
	return l+r;
}
int main(){

	vector<int> ds = {1,2,3,4,5};
	int n = ds.size();
	int sum = 10	,i=0;
	int s=0;
	cout<<func(i,ds,s,sum,n);

	return 0;
}