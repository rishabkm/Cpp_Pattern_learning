#include<iostream>
using namespace std;
int main(){
    int i,j,N;
    cout<<"Enter the N value:"<<endl;
    cin>>N;
    
    for(i=0;i<N;i++){
        for(j=0;j<N-i+1;j++){
            cout<<" ";
        }
        for(j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}