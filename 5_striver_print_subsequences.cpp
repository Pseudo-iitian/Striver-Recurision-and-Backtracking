#include<bits/stdc++.h>
using namespace std;

vector<int> arr = {3,2,7,4,1};
void f(int i,vector<int> a){
	if(i>=arr.size()){
		// we have to print consequences vector
		if(a.size()==0) cout<<"{}";
		for(auto &val:a){
			cout<<val<<" ";
		}
		cout<<endl;
		return;
	}
	a.push_back(arr[i]); 
	f(i+1,a); // take this value
	a.pop_back(); // remove this value 
	f(i+1,a); // and go for next value and same happens with thsis

}
int main(){

	// printing all the subsequences 
	// a = {1,2,3};
	// total number of ways is 2^3 = 8;
	// i.e. {{},{1},{2},{3},{1,2},{2,3},{1,3},{1,2,3}}
	// using take and not take formula

	vector<int> a;
	int i=0;
	f(i,a);


	return 0;
}