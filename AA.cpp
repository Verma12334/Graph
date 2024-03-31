// #include<iostream>
// #include<string.h>
// using namespace std;
// pair<char,int> max(char arr[]);

// int main(){
//     char arr[]="fenfbnfythfngbdxdfvaaaaaaaaadfgfasdcd";
//     pair<char,int>ans=max(arr);
//     cout<<"Maximum ouccrance character is: "<<ans.first<<endl;
//     cout<<"Maximum ouccrance character fequency is: "<<ans.second<<endl;
// }

// pair<char,int> max(char arr[]){
//     int n=strlen(arr);
//     int ptr[26]={0};

//     for(int i=0;i<n;i++){
//         char ch=arr[i];
//         ptr[ch-'a']++;
//     }

//     int ans=-1;
//     char ch;
//     for(int i=0;i<26;i++){
//         if(ptr[i]>ans){
//             ans=ptr[i];
//             ch='a'+i;
//         }
//     }
//     pair<char,int>answer=make_pair(ch,ans);
//     return answer;
// }


#include<iostream>
#include<string.h>
using namespace std;
pair<char,int> max(string&arr);
void isupper(string&arr);

int main(){
   string arr;
   cout<<"Enter the string:\n";
   getline(cin,arr);
   cout<<"\n\n";
    cout<<"Print string:"<<arr<<endl;
   cout<<"\n\n";
    pair<char,int>ans=max(arr);
   cout<<"\n\n";
    cout<<"Maximum ouccrance character is: "<<ans.first<<endl;
   cout<<"\n\n";
    cout<<"Maximum ouccrance character fequency is: "<<ans.second<<endl;
   cout<<"\n\n";
    cout<<"Print string:"<<arr<<endl;
   cout<<"\n\n";
}


pair<char,int> max(string&arr){
    int n=arr.size();
    int ptr[26]={0};
    isupper(arr);

    for(int i=0;i<n;i++){
        char ch=arr[i];
        ptr[ch-'a']++;
    }

    int ans=-1;
    char ch;
    for(int i=0;i<26;i++){
        if(ptr[i]>ans){
            ans=ptr[i];
            ch='a'+i;
        }
    }
    pair<char,int>answer=make_pair(ch,ans);
    return answer;
}

void isupper(string&arr){
    for(int i=0;i<arr.size();i++){
        if(isupper(arr[i])){
            arr[i]=arr[i]+32;
        }
    }
}