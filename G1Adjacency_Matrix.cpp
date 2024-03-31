#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the number of nodes in garph:>";
    cin>>n;
    cout<<"Enter the number of edges in garph:>";
    cin>>m;

    int arr[n][m];

    cout<<"Enter the degree of each node;>\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Adjaceny Matrix:>\n";

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}