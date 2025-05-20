#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s,x;
        cin>>x>>s;
        int count=0;
        while(x.length()<=n*m && x.find(s)==string::npos){
            count++;
            x=x+x;
        }
        if(x.find(s)!=string::npos){
            cout<<count<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }


    }
}