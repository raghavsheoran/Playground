#include<iostream>
#include<unordered_map>
using namespace std;


int max_rec(int a,int b, int c, unordered_map<string,int> & mp){
    if((a==0 && b==0)|| (b==0 && c==0)|| (a==0 && c==0)) return 0;
    else if(a<0 || b<0 || c<0) return 0;
    if(mp.find("to_string(a)_to_string(b)_to_string(c)")!=mp.end()) return mp["to_string(a)_to_string(b)_to_string(c)"];

    mp["to_string(a)_to_string(b)_to_string(c)"]=1+max(max_rec(a-1,b-1,c,mp),max(max_rec(a,b-1,c-1,mp),max_rec(a-1,b,c-1,mp)));
    return mp["to_string(a)_to_string(b)_to_string(c)"];
}
int main(){
    unordered_map<string,int> mp;
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)%2!=0) cout<<-1<<endl;
        else{
        cout<<max_rec(a,b,c,mp)<<endl;
        }
    }
    return 0;

}