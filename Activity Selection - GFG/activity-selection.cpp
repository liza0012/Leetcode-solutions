//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    bool static comp(pair<int, int> &a, pair<int, int> &b){
        if(a.second == b.second) return a.first<b.first;
        return a.second<b.second;
    }
    
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        vector<pair<int, int>> p(n);
        for(int i=0; i<n; i++){
            p[i]= {start[i], end[i]};
        }
        sort(p.begin(), p.end(), comp);
        int i=0, j=1;
        int ans=1;
       while(j<n){
           if(p[i].second<p[j].first){
               ans++;
               i=j;
           }
           j++;
           
       }
       return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}

// } Driver Code Ends