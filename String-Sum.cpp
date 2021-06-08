#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;
	int power=0;
	for(char& ch : str)
		power += int(ch)-96;

	cout << power;
}