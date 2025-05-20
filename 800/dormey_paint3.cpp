#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            mp[num]++;
        }
        if(mp.size()==2){
            int num1Len=mp.begin()->second;
            auto it =mp.begin();
            ++it;
            int num2Len=it->second;

            if( num1Len == num2Len || num1Len == num2Len-1 || num1Len-1==num2Len) {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }

        }
        else if(mp.size()==1) cout<<"Yes"<<endl;
        else{
            cout<<"No"<<endl;
        }
    }
}