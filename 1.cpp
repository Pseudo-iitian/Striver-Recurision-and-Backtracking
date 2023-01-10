#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    int a1 = a+b;
	    int b1 = b+c;
	    int c1 = a+c;
	    int d = max(a1,b1);
	    int mx = max(d,c1);
	    cout<<mx<<endl;
	}
	
	return 0;
}