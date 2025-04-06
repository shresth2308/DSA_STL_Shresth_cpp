#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<string> s;
    int size;
    cout<<"Enter the size of set: ";
    cin>>size;
    for(int i=0;i<size;i++){
        string str;
        cout<<"Enter "<<i+1<<" string: ";
        cin>>str;
        s.insert(str);
    }
    int query;
    cout<<"\nEnter number of queries: ";
    cin>>query;
    for(int i=0;i<query;i++){
        cout<<"Enter "<<i+1<<" query: ";
        string str;
        cin>>str;
        if(s.find(str)!=s.end()){
            cout<<"String exist."<<endl;
        }
        else{
            cout<<"String does not exist."<<endl;
            continue;
        }
    }
}