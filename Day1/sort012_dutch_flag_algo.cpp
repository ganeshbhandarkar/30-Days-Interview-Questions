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

void solve(int a[], int n){
	int mid = 0;
	int low = 0;
	int high = n-1;

	while(mid<=high){
		switch(a[mid]){
			case 0:
			swap(a[mid],a[low]);
			mid++;
			low++;
			break;
			case 1:
			mid++;
			break;
			case 2:
			swap(a[high],a[mid]);
			high--;
			break;
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}

int main(){

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	solve(a,n);

	return 0;
}