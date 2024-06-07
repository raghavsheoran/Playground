#include<iostream>
using namespace std;
#include<vector>
#include<queue>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        priority_queue<int,vector<int>,greater<int>> pq_1;
        priority_queue<int,vector<int>,greater<int>> pq_2;
        priority_queue<int,vector<int>,greater<int>> pq_3;
        vector<int> a(n),b(n),c(n);
        for(int i=0; i<n; i++) {cin>>a[i];
        if(pq_1.size()<3) pq_1.push(a[i]);
        else{
            if(pq_1.top()<a[i]){pq_1.pop(); pq_1.push(a[i]);}
        }
        }
        for(int i=0; i<n; i++) {cin>>b[i];
        if(pq_2.size()<3) pq_2.push(b[i]);
        else{
            if(pq_2.top()<b[i]){pq_2.pop(); pq_2.push(b[i]);}
        }
        }
        for(int i=0; i<n; i++) {cin>>c[i];
        if(pq_3.size()<3) pq_3.push(c[i]);
        else{
            if(pq_3.top()<c[i]){pq_3.pop(); pq_3.push(c[i]);}
        }
        }
        vector<vector<int>> max_index(3);
        

    }
}