#include<bits/stdc++.h>
using namespace std;

vector<int> arr = {3,1,2};
int n = arr.size();
int sum = 3;
void f(int i,vector<int> a,int s){

	if(i==n){
		// we have to print consequences vector
		// if(a.size()==0) cout<<"{}";
		// int sum = accumulate(a.begin(),a.end(),0);
		if(s==sum){
			for(auto &val:a){
				cout<<val<<" ";
			}
			cout<<endl;
		}
		return;
	}
	a.push_back(arr[i]); 
	s+=arr[i];
	f(i+1,a,s); // take this value
	a.pop_back(); // remove this value 
	s-=arr[i];
	f(i+1,a,s); // and go for next value and same happens with thsis

}
int main(){

	vector<int> a;
	int i=0;
	f(i,a,0);


	return 0;
}