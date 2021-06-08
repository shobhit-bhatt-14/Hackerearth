#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;
	if(str.back() == '6') {
		cout << "-1";
		exit(0);
	}
	str.erase(remove(str.begin(), str.end(), '6'), str.end());
	int len;
	len = str.length();
	if(len == 0)
		cout << "-1";
	else
		cout << len;
	return 0;
}