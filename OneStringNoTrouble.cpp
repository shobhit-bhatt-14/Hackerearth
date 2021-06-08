#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int count=0 , len , flag=0;
	len = s.length();
	for(int i=0 ; i<len ; i++) {
		flag++;
		if(s[i] == s[i-1])
			flag = 1;

		if(count < flag)
			count = flag;
		
	}

	cout << count << "\n";
	return 0;
}