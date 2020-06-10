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


/*

GeeksforGeeks : https://www.geeksforgeeks.org/find-duplicates-in-on-time-and-constant-extra-space/

// C++ code to find 
// duplicates in O(n) time 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to print duplicates 
void printRepeating(int arr[], int size) 
{ 
int i; 
cout << "The repeating elements are:" << endl; 
for (i = 0; i < size; i++) 
{ 
    if (arr[abs(arr[i])] >= 0) 
    arr[abs(arr[i])] = -arr[abs(arr[i])]; 
    else
    cout << abs(arr[i]) << " "; 
} 


} 
  
// Driver Code 
int main() 
{ 
    int arr[] = {1, 2, 3, 1, 3, 6, 6}; 
    int arr_size = sizeof(arr)/sizeof(arr[0]); 
    printRepeating(arr, arr_size); 
    return 0; 
} 
  
  / C++ code to find 
// duplicates in O(n) time 



#include <bits/stdc++.h> 
using namespace std; 
  

int main() 
{ 
      
    int numRay[] = {0, 4, 3, 2, 7, 8, 2, 3, 1}; 
    int arr_size = sizeof(numRay) /  
                   sizeof(numRay[0]);  
    for (int i = 0; i < arr_size; i++) 
    { 
        numRay[numRay[i] % arr_size] = numRay[numRay[i] % arr_size] + arr_size; 
    } 
    cout << "The repeating elements are : " << endl; 
    for (int i = 0; i < arr_size; i++)  
    { 
        if (numRay[i] >= arr_size*2)  
        { 
            cout << i << " " << endl; 
        } 
    } 
    return 0; 
} 
  

*/