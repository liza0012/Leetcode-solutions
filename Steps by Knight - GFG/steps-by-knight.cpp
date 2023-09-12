//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	   // 
	   vector<vector<int>> grid(N,vector<int>(N,0));
    int px=KnightPos[0]-1;
    int py=KnightPos[1]-1;

    int tx=TargetPos[0]-1;
    int ty=TargetPos[1]-1;

    int x[]={-1,1,-2,-2,-1,1,2,2};
    int y[]={2,2,-1,1,-2,-2,-1,1};

    queue<pair<int,int>> q;
    q.push({px,py});
    grid[px][py]=1;

    while(!q.empty())
    {
        int s=q.size();
        while(s--)
        {
            pair<int,int> curr=q.front();
            q.pop();
            for(int i=0;i<8;i++)
            {
                int u=curr.first+x[i];
                int v=curr.second+y[i];

                if(u>=0 && u<N && v>=0 && v<N && grid[u][v]==0)
                {
                    q.push({u,v});
                    grid[u][v]=grid[curr.first][curr.second]+1;
                }
                if(grid[tx][ty]!=0)
                    return grid[tx][ty]-1;
            }
        }
    }

   return -1;


	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends