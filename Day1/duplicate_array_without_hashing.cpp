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

int main(){
	IO();
	int n;
	cin>>n;
	vector<int> v;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	int pre[n] = {};
	for(int i=0;i<n;i++){
		pre[v[i]]++;
	}
	for(int i=0;i<n;i++){
		if(pre[i]>1){
			cout<<i<<endl;
		}
	}
	
	return 0;
}
