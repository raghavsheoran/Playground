#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<char> arr;
        unordered_map<char,char> st;
        for(int i=0; i<int(s.length()); i++){
            if(st.find(s[i])==st.end()){
                st[s[i]]=' ';
                arr.push_back(s[i]);
            }
        }
        sort(arr.begin(),arr.end());
        for(int i=0; i<int(arr.size()); i++){
            st[arr[i]]=arr[arr.size()-1-i];
        }
        for(int i=0; i<int(s.length()); i++){
            cout<<st[s[i]];
        }
        cout<<endl;
        
        

    }
    return 0;
}