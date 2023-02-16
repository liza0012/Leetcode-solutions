//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        sort(candies, candies+N);
        vector<int> ans;
        int min=0; 
        int buy_min=0;
        int free_min=N-1;
        while(buy_min<=free_min){
            min= min+candies[buy_min];
            buy_min++;
            free_min=free_min-K;
            
        }
        
        int max=0;
        int buy_max=N-1;
        int free_max=0;
        while(free_max<=buy_max){
            max=max+candies[buy_max];
            buy_max--;
            free_max= free_max+K;
        }
        
        ans.push_back(min);
        ans.push_back(max);
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends