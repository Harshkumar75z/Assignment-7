// Print the following pattern
// Sample Input : m = 4, n = 6
// Sample Output :
// ******
// *    *
// *    *
// ******
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the value of m : ";
    cin>>m;
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==m || j==1 || j==n)
            cout<<"*"<<" ";
            else cout<<"  ";
        }
        cout<<endl;   
    }
}