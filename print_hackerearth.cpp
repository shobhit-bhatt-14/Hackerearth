#include<bits/stdc++.h>
using namespace std;

int check(map<char,int> hash) {
	int count=INT_MAX;

	if((hash['a']/2 == 0) || (hash['e']/2 == 0) || (hash['h']/2 == 0) || (hash['r']/2 == 0) || (hash['c'] == 0) || (hash['k'] == 0) || (hash['t'] == 0))
		return 0;
	if(hash['a']/2 < count)	(count = hash['a']/2);
	
	if(hash['e']/2 < count)	(count = hash['e']/2);
	
	if(hash['h']/2 < count)	(count = hash['h']/2);
	
	if(hash['r']/2 < count)	(count = hash['r']/2);
	
	if(hash['c'] < count)	count = hash['c'];
	
	if(hash['k'] < count)	count = hash['k'];
	
	if(hash['t'] < count)	count = hash['t'];
	
	
	return count;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long int n;
	cin >> n;
	string str;
	cin >> str;
	map<char,int> hash;
	for(int i=0 ; i<n ; i++)
		hash[str[i]]++;

	cout << check(hash);
	return 0;
}