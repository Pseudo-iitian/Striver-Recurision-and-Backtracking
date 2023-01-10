#include <bits/stdc++.h>
using namespace std;

vector<int> ans={1,2,3,4,2,3,1,2,3,4};
// void reverse(int left, int right){

// 	if(left>=right) return;
// 	swap(ans[left],ans[right]);
// 	reverse(left+1,right-1);
// }

void reverse(int i){
	int n = ans.size();
	if(i>=n/2) return;
	swap(ans[i],ans[n-1-i]);
	reverse(i+1);
}
int main(void){
	int left = 0;
	int right = ans.size()-1;
	// reverse(left,right);
	reverse(0);
	for(auto &val : ans){
		cout<<val<<" ";
	}

	return 0;
}
