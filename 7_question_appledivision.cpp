#include<bits/stdc++.h>
using namespace std;

vector<int> arr;
long long mn=LLONG_MAX;
void f(int i,vector<int> a,long long sum,long long Tsum){
	if(i>=arr.size()){
		long long var = abs(2*sum-Tsum);
		mn=min(mn,var);
		return;
	}
	a.push_back(arr[i]);
	sum+=arr[i];
	f(i+1,a,sum,Tsum); 
	a.pop_back();
	sum-=arr[i];
	f(i+1,a,sum,Tsum); 
}
int main(){
	int n;
	long long Tsum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int val;
		cin>>val;
		Tsum+=val;
		arr.push_back(val);
	}
	vector<int> a;
	// cout<<Tsum;
	long int  sum = 0;
	int i=0;
	f(i,a,sum,Tsum);
	cout<<mn;
	return 0;
}