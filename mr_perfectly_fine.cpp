#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        
        vector<int> one;
        vector<int> two;
        vector<int> both;
        
        for(int j=0; j<n; j++){
             int minute,k;
             cin>>minute>>k;
            
             if(k==10){one.push_back(minute);}
             else if(k==1){two.push_back(minute);}
             else if(k==11){both.push_back(minute);}
             else continue;
        }
        
        
        sort(one.begin(),one.end());
        sort(two.begin(),two.end());
        sort(both.begin(),both.end());
        
        if(one.size()==0 || two.size()==0){
        if(both.size()==0) cout<<-1<<endl;
        else cout<<both[0]<<endl;
        }
        else{
            if(both.size()!=0) cout<<min(both[0],one[0]+two[0])<<endl;
            else cout<<one[0]+two[0]<<endl;
                
        }
    }

}