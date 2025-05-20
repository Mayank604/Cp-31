// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    vector<vector<int>>score(10,vector<int>(10));
    
    score[0]={1,1,1,1,1,1,1,1,1,1};
    score[1]={1,2,2,2,2,2,2,2,2,1};
    score[2]={1,2,3,3,3,3,3,3,2,1};
    score[3]={1,2,3,4,4,4,4,3,2,1};
    score[4]={1,2,3,4,5,5,4,3,2,1};
    score[5]={1,2,3,4,5,5,4,3,2,1};
    score[6]={1,2,3,4,4,4,4,3,2,1};
    score[7]={1,2,3,3,3,3,3,3,2,1};
    score[8]={1,2,2,2,2,2,2,2,2,1};
    score[9]={1,1,1,1,1,1,1,1,1,1};
    
    
    while(t--){
        int point=0;
        
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                char c;
                cin>>c;
                if(c=='X'){
                    point+=score[i][j];
                }
            }
        }
        cout<<point<<endl;
    }

    return 0;
}