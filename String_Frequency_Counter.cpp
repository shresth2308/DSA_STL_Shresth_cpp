#include<bits/stdc++.h>
using namespace std;
int main(){
    map <string,int> m;
    int size;
    cout<<"Enter size for map: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter "<<i+1<<" string: ";
        string s;
        cin>>s;
        m[s]=m[s]+1;
    }
    for(auto &pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}