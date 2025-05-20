#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int efficiency=0;
        for(int i=0;i<n-1;i++){
            int a;
            cin>>a;
            efficiency+=a;
        }
        
        cout<<-efficiency<<endl;
    }

    return 0;
}