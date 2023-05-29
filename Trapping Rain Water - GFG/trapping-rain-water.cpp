//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    //2 POINTER APPROACH
    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int left=0;
        int right=n-1;
        int leftbar=arr[0];
        int rightbar=arr[n-1];
        long long ans=0;
        while(left<=right){
            if(leftbar<rightbar){
                 if(arr[left]> leftbar){
                     leftbar=arr[left];
                     
                 }
                 else{
                     ans+=leftbar-arr[left];
                     left++;
                     
                 }
            }
            else{
                if(arr[right]>rightbar){
                    rightbar=arr[right];
                    
                }else{
                    ans+=rightbar-arr[right];
                    right--;
                    
                }
            }
            
        
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends