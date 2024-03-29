//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

   void solve(int i, vector<int> &arr, int N, int sum, vector<int> &ans){
        //base case= reaching end of array
        if(i==N){
            ans.push_back(sum);
            return ;
        }
        solve(i+1, arr, N, sum, ans);// element is not added
        solve(i+1, arr, N, sum + arr[i], ans);// element is picked/added
        
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        solve(0, arr, N, 0, ans);
        sort(ans.begin(), ans.end());
        return ans;
        
    }
    /*void subsetSumsHelper(int ind, vector < int > & arr, int N, vector < int > & ans, int sum) {
      if (ind == N) {
        ans.push_back(sum);
        return;
      }
      //element is picked
      subsetSumsHelper(ind + 1, arr, N, ans, sum + arr[ind]);
      //element is not picked
      subsetSumsHelper(ind + 1, arr, N, ans, sum);
    }
  vector < int > subsetSums(vector < int > arr, int N) {
    vector < int > ans;
    subsetSumsHelper(0, arr, N, ans, 0);
    sort(ans.begin(), ans.end());
    return ans;
  }*/
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends