#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"The Pattern"<<endl;
    for(int i=0;i<10;i++){
        for(int j=0;j<i-j;j++){
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}