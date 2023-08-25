//{ Driver Code Starts
// Initial Template for C++



#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// class Solution{
// public:
//     int pageFaults(int N, int C, int pages[]){
//         // code here
//         /*set<int> st(C);
//         int i=0;
//         int j=0;
//         int page_fault=0;
//         while(j<N){
//             if(j-i+1<C){
//                 st.insert(pages[j]);
//             }
//             if((j==C) && j-i+1==C){
//                 st.insert(pages[i]);
//                 page_fault+=C;
//             }
//             if(j-i+1 == C){
//                 if(st.find(page[j])!=st.end()){
//                     i++;
//                     //j++;
//                 }
//                 else{
                    
//                 }
//         }*/
        
//     }
// };
class Solution{
public:
    int pageFaults(int N, int C, int pages[]){
        // code here
        unordered_map<int , int>mp;
        int i = 0;
        int j = 0;
        int pgfault = 0;
        while(j< N){
            if(mp.find(pages[j]) == mp.end()){
                pgfault++;
                //mp[pages[j]]++;
            }
             mp[pages[j]]++;
            
            while(mp.size() > C){
               mp[pages[i]]--;
               if(mp[pages[i]] == 0)
                mp.erase(pages[i]);
                i++;
                
            }
            j++;
        }
        return pgfault;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, C;
        cin>>N;
        int pages[N];
        for(int i = 0;i < N;i++)
            cin>>pages[i];
        cin>>C;
        
        Solution ob;
        cout<<ob.pageFaults(N, C, pages)<<"\n";
    }
    return 0;
}
// } Driver Code Ends