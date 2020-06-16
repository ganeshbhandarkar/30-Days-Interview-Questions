#include<bits/stdc++.h>
using namespace std;
#define fi first
#define ll long long int
#define se second

void IO(){
	/* code */
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef OJ
	freopen("C:/Users/KIIT/Interview Questions/30-Days-Interview-Questions/input.txt","r",stdin);
	freopen("C:/Users/KIIT/Interview Questions/30-Days-Interview-Questions/output.txt","w",stdout);
	#endif
}

void solve(int a[], int n){
	// make using countin of 0,1,2
	int i=0,c1=0,c2=0,c0=0;
	for(int i=0;i<n;i++){
		switch(a[i]){
			case 0:
			c0++;
			break;
			case 1:
			c1++;
			break;
			case 2:
			c2++;
			break;
		}
	}

	while(c0>0){
		a[i++]=0;
		c0--;
	}

	while(c1>0){
		a[i++]=1;
		c1--;
	}

	while(c2>0){
		a[i++]=2;
		c2--;
	}

	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}

int main(){
	IO();
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	solve(a,n);
}