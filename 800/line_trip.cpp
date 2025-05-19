#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        cin>>x;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int maxi=arr[0];
        for(int i=0;i<n-1;i++){
            maxi=max(arr[i+1]-arr[i],maxi);
        }
        maxi=max((x-arr[n-1])*2,maxi);

        cout<<maxi<<endl;

    }
}
