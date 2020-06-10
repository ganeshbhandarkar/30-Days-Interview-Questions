#include<bits/stdc++.h>
using namespace std;
#define pb push_back
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


int main(){
	IO();
	int n;cin>>n;
	int a[n];
	map<int, int> mp;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		mp[a[i]]++;
	}
	// for(int i=0;i<n;i++){
	// 	cout<<v[i]<<endl;
	// }
	for(auto i : mp){
		if(i.second > 1){
			cout<<i.first<<endl;
		}
	}
	return 0;
}