/*
Kadane’s algorithm is used to find out the maximum subarray sum from an array of integers
*/

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

int kadane(int a[],int n){
	int max_end = 0;
	int max_so_far = 0;
	for(int i=0;i<n;i++){
		max_end+=a[i];
		if(max_so_far<max_end){
			max_so_far = max_end;
		}
		if(max_end<0){
			max_end=0;
		}
	}
	return max_so_far;
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