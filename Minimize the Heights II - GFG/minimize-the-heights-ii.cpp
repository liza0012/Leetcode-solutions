//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // int getMinDiff(int arr[], int n, int k) {
    //     // code here
    //     int i=0;
    //     int j=n-1;
    //     int diff;
    //     sort(arr, arr+n);
    //     while(j<n && i<n && i<j){
    //     int mini=arr[i]+k;
    //     int maxi=arr[j]-k;
    //      diff=maxi-mini;
    //     if(diff<0){
    //         i++; j--;
    //     } 
    //     else{
    //         break;
    //     }
    //     }
    //     return diff;
        
    // }
    int getMinDiff(int arr[], int n, int k) {
        // code here
    sort(arr,arr+n);
    int tempmin=arr[0];
    int tempmax=arr[n-1];
    int ans=tempmax-tempmin;
    for(int i=1;i<n;i++){
        if(arr[i]-k<0)
        continue;
        tempmin=min(arr[0]+k,arr[i]-k);
        tempmax=max(arr[i-1]+k,arr[n-1]-k);
    ans=min(ans,tempmax-tempmin);
    }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends