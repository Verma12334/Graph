#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void addEdge(vector<int>adj[],int u,int v,bool t);
void Print_DFS(vector<int>adj[],int ,int);
void Print_Adjacency_List(vector<int>adj[],int n);
void DFS(vector<int>adj[],int s,vector<bool>&visited);

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

    int s;
    cout<<"Enter the source vertic :->";
    cin>>s;
    cout<<"DFS Travellese:=>\n";
    Print_DFS(adj,n,s);
    cout<<"\nPrint Adjacency List of Garph:=>\n";
    Print_Adjacency_List(adj,n);
}


void addEdge(vector<int>adj[],int u,int v,bool t){
    adj[u].push_back(v);
    if(t==true){
        adj[v].push_back(u);
    }
}



void Print_DFS(vector<int>adj[],int n,int s){
    vector<bool>visited(n,false);
    for(int i=0;i<n;i++){
        if(visited[i]==false){
        DFS(adj,i,visited);
        }
    }}


    void DFS(vector<int>adj[],int s,vector<bool>&visited){
        if(visited[s]==false){
            visited[s]=true;
            cout<<s<<" ";
        }
        for(int i:adj[s]){
            if(visited[i]==false){
                DFS(adj,i,visited);
            }
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
  