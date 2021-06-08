#include<bits/stdc++.h>
using namespace std;

int main() {
	int n , x , min , max , prev , post;
	cin >> n;
	map<int,int> hash;
	while(cin >> x)
		hash[x]++;

	auto it=hash.begin();
	prev = it->first;
	for( advance(it , 1); it!=hash.end() ; ++it) {
		post = it->first;
		if(prev+1 == post) {
			prev = post;
			continue;
		}
		else {
			cout << "NO";
			exit(0);
		}
	}

	cout << "YES";

	return 0;
}