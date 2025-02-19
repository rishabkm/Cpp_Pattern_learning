#include<iostream>
using namespace std;
int main(){
    int i,j,start,N;
    cout<<"Enter the value of N:";
    cin>>N;
    for(i=0;i<N;i++){
        start = 1;
        if(i%2 == 0) start = 1;
        else start= 0;
        
        for(j=0;j<=i;j++){
            cout<<start;
            start = 1-start;
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}