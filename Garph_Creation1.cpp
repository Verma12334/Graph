#include<iostream>
#include<vector>
using namespace std;
void addEdge(vector<int>adj[],int u,int v,bool t);
void Print_Adjacency_List(vector<int>adj[],int n);

int main(){

    int n;
    cout<<"Enter the number of vertic of graph:->";
    cin>>n;
    //create adjacency list
    vector<int>adj[n];
    //add the edges
    int u,v;
    cout<<"Enter the number of edges:->";
    int m;
    cin>>m;
    bool type;
    cout<<"Creating graph Directed or not if Directed enter true else false:->";
    cin>>type;

    for(int i=0;i<m;i++){
        int u,v;
        cout<<"Enter the value of u->";
        cin>>u;
        cout<<"Enter the value of v->";
        cin>>v;
        addEdge(adj,u,v,type);
    }

    Print_Adjacency_List(adj,n);
}

void addEdge(vector<int>adj[],int u,int v,bool t){
    adj[u].push_back(v);
    if(t==true){
        adj[v].push_back(u);
    }
}



void Print_Adjacency_List(vector<int>adj[],int n){
    for(int i=0;i<n;i++){
        for(auto y:adj[i]){
            cout<<y<<" ";
        }
        cout<<"\n";
    }
}