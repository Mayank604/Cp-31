#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int consThree=0;
        int countEmpty=0;
        vector<char>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i>1 && arr[i-1]=='.' && arr[i]=='.' && arr[i-2]=='.')
                consThree++;
            if(arr[i]=='.')
                countEmpty++;

        }

        if(consThree>=1){
            cout<<"2"<<endl;
        }else{
            cout<<countEmpty<<endl;
        }

    }
    return 0;
}