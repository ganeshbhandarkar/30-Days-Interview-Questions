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

int kadane(int *a,int n){
	int sum = a[0];
	int sum_so_far = a[0];
	for(int i=1;i<n;i++){
		sum_so_far = max(a[i],sum_so_far+a[i]);
		sum = max(sum_so_far,sum);
	}
	return sum;
}

int main(){
	IO();
	int n;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<kadane(a,n);
}