#include<iostream>
using namespace std;
int main(){
    int i,n,j;
    cout<<"Enter the value of N:";
    cin>>n;
    
    for(i=0;i<n;i++){
        
        for(j=0;j<n-i-1;j++){
            
            cout<<" ";
        }
        for(j=0;j<2*i+1;j++){
            
            cout<<"*";
        }
        for(j=0;j<n-i-1;j++){
            
            cout<<" ";
        }
        cout<<endl;
    }
    
// inverted pattern
for(i=0;i<n;i++){
    for(j=0;j<i;j++){
        cout<<" ";
    }
    for(j=0;j<2*n-(2*i+1);j++){
        cout<<"*";
    }
    for(j=0;j<i;j++){
        cout<<" ";
    }
    cout<<endl;
}
    return 0;
}