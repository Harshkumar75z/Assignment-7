// Print the following pattern
// Sample Input : n = 4
// Output :
//     ****
//    ****
//   ****
//  ****
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int i=1;i<=n;i++){
            cout<<"*";
        }
        cout<<endl; 
    }    
}