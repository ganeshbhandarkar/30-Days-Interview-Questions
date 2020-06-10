#include<bits/stdc++.h>
using namespace std;

void IO(){
	/* code */
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef OJ
	freopen("C:/Users/KIIT/Interview Questions/30-Days-Interview-Questions/input.txt","r",stdin);
	freopen("C:/Users/KIIT/Interview Questions/30-Days-Interview-Questions/output.txt","w",stdout);
	#endif
}

// Repeating and Missing No

void solve(int a[], int n,int sumI, int sumA){
	int pre[n+1] = {};
	// to check missing
	sort(a,a+n);
	int rep;
	for(int i=0;i<n;i++){
		pre[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(pre[i]>1){
			rep = i;
		}
	}
	cout<<"missing "<<sumI-sumA+rep<<" "<<"repe "<<rep<<endl;

}

int main(){
	IO();

	int n;
	cin>>n;
	int a[n];
	int sumI = 0,sumA = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sumA+=a[i];
	}
	for(int i=1;i<=n;i++){
		sumI+=i;
	}
	solve(a,n,sumI,sumA);

	return 0;
}