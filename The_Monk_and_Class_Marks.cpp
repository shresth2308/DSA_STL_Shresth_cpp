#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	map<int,multiset<string>> m;
	for(int i=0; i<n; i++){
		string str;
		int mrk;
		cin>>str>>mrk;
		m[mrk].insert(str);
	}
	auto it=(--m.end());
    while(1){
		auto &s_it= (*it).second;
        int marks= (*it).first;
        for(auto name:s_it){
            cout<<name<<" "<<marks<<endl;
        }
        if(it==m.begin()){
            break;}
        else{
            it--;
        }
    }
}