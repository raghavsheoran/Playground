#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        int insert=0;
        for(int i=0; i<n; i++){
            int num=a[i];
            for(int j=i+insert; j<n; j++){
                if(b[j]>=num) break;
                else insert++;
            }
        }
        cout<<insert<<endl;
    }
    return 0;
}