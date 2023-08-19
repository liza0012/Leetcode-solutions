//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minH;
        //priority_queue<pair<int, int>, vector<pair<int, int>>, greator<pair<int, int>>>minH;
        vector<int> vis(V, 0);
        vector<int> dist(V, 1e9);
        dist[S]=0;
        minH.push({0, S});
        while(!minH.empty()){
            int dis=minH.top().first;
            int node=minH.top().second;
            minH.pop();
            for(auto it: adj[node]){
                int edgewgt=it[1];
                int adjnode=it[0];
                if(dis+edgewgt<dist[adjnode]){
                    dist[adjnode]=dis+edgewgt;
                    minH.push({dist[adjnode], adjnode});
                    
                }
                
            }
            
        }
        return dist;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends