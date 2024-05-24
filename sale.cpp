#include<iostream>
using namespace std;
#include<queue>
int main(){
    int m,n;
    cin>>m>>n;
    priority_queue<int> q;
    for(int i=0; i<m; i++){
       int t;
       cin>>t;
       if(t<0){q.push(abs(t));}
    }
    int i=0;
    int sum=0;
    while(q.empty()==false && i<n){
        i++;
        sum+=q.top();
        q.pop();

    }
    cout<<sum;
    return 0;
}