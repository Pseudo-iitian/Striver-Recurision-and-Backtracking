#include <bits/stdc++.h>
using namespace std;


// we are returning an array whose total sum is equal to predefined sum
bool func(int i,vector<int> &ds,int s,int sum,vector<int> &arr,int n){

	if(i==n){
		if(s==sum){
			for(auto it: arr) cout<<it<<" ";
			cout<<endl;
			return true;
		}
		return false;
	}

	arr.push_back(ds[i]);
	s+=ds[i];	
	if(func(i+1,ds,s,sum,arr,n)==true) return true;
	arr.pop_back();
	s-=ds[i];
	if(func(i+1,ds,s,sum,arr,n)==true) return true;
	return false;
}
int main(){

	vector<int> ds = {1,2,3,4,5};
	int n = ds.size();
	vector<int> arr;
	int sum = 10,i=0;
	int s=0;
	func(i,ds,s,sum,arr,n);

	return 0;
}