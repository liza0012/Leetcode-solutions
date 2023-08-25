//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    bool static comp(pair<int, int> &a, pair<int, int> &b){
        if(a.second == b.second) return a.first<b.first;
        return a.second<b.second;
    }
    
    // int activitySelection(vector<int> start, vector<int> end, int n)
    // {
    //     // Your code here
    //     vector<pair<int, int>> p(n);
    //     for(int i=0; i<n; i++){
    //         p[i]= {start[i], end[i]};
    //     }
    //     sort(p.begin(), p.end(), comp);
    //     int i=0, j=1;
    //     int ans=1;
    //   while(j<n){
    //       if(p[i].second<p[j].first){
    //           ans++;
    //           i=j;
    //       }
    //       j++;
           
    //   }
    //   return ans;
    // }
    
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
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
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends