// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        unordered_map<int,int> umap;
        vector<int> arr1;
        vector<int> arr2;
        vector<int> arr3(n+m);
        
        for(int i=1;i<=n;i++){
            cin>>a[i];
            arr1.push_back(a[i]);
        }
        for(int i=1;i<=m;i++){
            cin>>b[i];
            arr2.push_back(b[i]);
        }
        
        merge(arr1.begin(),arr1.end(),arr2.begin(), arr2.end(),arr3.begin());
       
        for(int i=1;i<=arr3.size();i++){
            umap[arr3[i]]++;
            }
        return umap.size();
        
        
        
        
        
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends