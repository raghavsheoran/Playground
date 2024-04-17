#include<iostream>
using namespace std;
#include<vector>
#include<string>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l=0,r=0;
        for(int i=0; i<n; i++){
            if(s[i]=='0') l++;
            else r++;
        }
        int on_left=0;
        int on_right=n;
        int pos;
        int dist=INT_MAX;
        int left_satisfied=0; // people satisfied on left
        int right_satisfied=r;
        int h_r=n/2;
        if(n%2!=0) h_r++;
        if(r>=h_r){
            pos=0;
            dist=abs(n/2);
        }
        for(int i=1; i<=n; i++){
            on_left++;
            on_right--;
            if(s[i-1]=='0'){ // wants to live on left side
            left_satisfied++;}
            else{ // wants to live on right side
            right_satisfied--;}
            int half_left=on_left/2;
            if(on_left%2!=0) half_left++;
            int half_right=on_right/2;
            if(on_right%2!=0) half_right++;
            if(left_satisfied>=half_left && right_satisfied>=half_right){
                if(n%2==0){if(abs(n/2-i)<dist){pos=i; dist=abs(n/2-i);}}
                else{
                if(n/2>=i) {if(abs(n/2-i)<dist){pos=i; dist=abs(n/2-i);}}
                else {if(abs(n/2-i)-1<dist){pos=i; dist=abs(n/2-i)-1;}}}
                }
        

    }
    cout<<pos<<endl;

}}