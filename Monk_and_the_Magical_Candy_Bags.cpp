#include<bits/stdc++.h>
using namespace std;
int main() {
	int test_case;
	cin>>test_case;
	while(test_case--){
	    int n, k;
		cin>>n>>k;
		multiset<long long> s;
		for(int i=0; i<n; i++){
			long long ai;
			cin>>ai;
			s.insert(ai);
		}
		long long total_candies=0;
		for(int i=0; i<k; i++){
			auto it = (--s.end());
			long long candy=(*it);
			total_candies+=candy;
			s.erase(it);
			s.insert(candy/2);
		}
		cout<<total_candies<<endl;
	}
}