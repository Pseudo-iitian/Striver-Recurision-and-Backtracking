#include<bits/stdc++.h>
using namespace std;

int ans[] = {1,2,3,2,1};
int n = sizeof(ans)/sizeof(int);

bool chkpalidrome(int i){
	if(i>=n/2) return true;
	if(ans[i]!=ans[n-1-i]) return false;
	return chkpalidrome(i+1);
}
int main(){

	if(chkpalidrome(0)==true) cout<<"YES";
	else cout<<"NO";
	return 0;
}