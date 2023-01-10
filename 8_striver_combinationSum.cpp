#include <bits/stdc++.h>
using namespace std;

vector<int> arr = {1,2,3,4};
vector<vector<int>> ans;

void findComb(int ind,int target, vector<int> ds){
	if(ind==arr.size()){
		if(target==0){
			ans.push_back(ds);
		}
		return;
	}
	if(arr[ind]<=target){
		ds.push_back(arr[ind]);
		findComb(ind,target-arr[ind],ds);
		ds.pop_back();	
	}
	findComb(ind+1,target,ds);
}
int main(){
	int target = 3;
	vector<int> ds;
	findComb(0,target,ds);
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}