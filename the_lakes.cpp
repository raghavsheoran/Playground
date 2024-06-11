#include<iostream>
using namespace std;
#include<vector>
vector<int> d_r={1,-1,0,0};
vector<int> d_c={0,0,-1,1};
void dfs(vector<vector<int>>& nums,vector<vector<bool>> & visited, int r, int c, int & k){
    visited[r][c]=true;
    k+=nums[r][c];
    int n_r,n_c;
    for(int i=0; i<4; i++){
        n_r=r+d_r[i];
        n_c=c+d_c[i];
        if(n_r>=0 && n_c>=0 && n_r<nums.size() && n_c<nums[0].size() && 
        nums[n_r][n_c]>0 && visited[n_r][n_c]==false){
            dfs(nums,visited,n_r,n_c,k);

        }

    }

}




int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,m;
        cin>>m>>n;
        vector<vector<int>> nums(m,vector<int>(n));
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>nums[i][j];
            }
        }
        int res=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(nums[i][j]>0 && visited[i][j]==false){
                    int k=0;
                    dfs(nums,visited,i,j,k);
                    res=max(res,k);
                }
            }
        }
        cout<<res<<endl;


    }
}