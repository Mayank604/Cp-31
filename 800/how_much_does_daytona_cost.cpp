#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        map<int,int>mp;
        
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            mp[num]++;
        }
       if(mp[k]){
           cout<<"Yes"<<endl;
       }else{
           cout<<"No"<<endl;
       }
        
    }
}