#include<iostream>
using namespace std;
#include<queue>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,m;
        cin>>n>>m;
        if(m>n) cout<<"NO"<<endl;
        else{
        queue<int> q;
        q.push(n);
        bool possible=false;
        while(q.empty()==false){
            int temp=q.front();
            q.pop();
            if(temp==m) {possible=true; break;}
            if(temp%3!=0) continue;
            else{
                int k=temp/3;
                q.push(k*2);
                q.push(k);
            }
        }
        if(possible) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        
        }
    }

}