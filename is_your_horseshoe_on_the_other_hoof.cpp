#include<iostream>
using namespace std;
#include<unordered_set>
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    unordered_set<int> st;
    st.insert(a); st.insert(b); st.insert(c); st.insert(d);
    cout<<4-st.size();
    return 0;

}