#include<iostream>
using namespace std;
#include<map>
pair<int,int> mapp(int arr[],int n);

int main(){
    int arr[10]={1,3,4,54,6,7,8,99,9,8};
    pair<int,int>ans=mapp(arr,10);
    cout<<"Frequency is: "<<ans.second<<" and value: "<<ans.first<<endl; 
    
    
}

pair<int,int> mapp(int arr[],int n){
    map<int,int>p;
    int maxfeq=0;
    int maxans=0;
    for(int i=0;i<n;i++){
        p[arr[i]]++;
        maxfeq=max(maxfeq,p[arr[i]]);
    }
    
    int ans=0;
    int max=-1;

    for(auto i:p){
        if(max<i.second){
            ans=i.second;
            max=i.first;
        }
    }

    for(int i=0;i<n;i++){
        if(maxfeq==p[arr[i]]){
            maxans=arr[i];
            break;
        }
    }
    pair<int,int>answer=make_pair(maxans,ans);
    return answer;
}