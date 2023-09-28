//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    unordered_map<char, int> mp;
    int st=0;
    int res=-1;
    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
        if(mp.size()==k){
            res=max(res, i-st+1);
        }
        else if(mp.size()>k){
            while(mp.size()>k){
                mp[s[st]]--;
                if(mp[s[st]]==0){
                    mp.erase(s[st]);
                    
                }
                st++;
            }
        }
        
        
    }
    return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends