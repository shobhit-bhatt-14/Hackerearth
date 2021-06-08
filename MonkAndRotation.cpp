#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t , n , k , l;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		int arr[n];
		for(int x=0 ; x<n ; x++)
		    cin >> arr[x];

		l = k%n;

		for(int i=n-l ; i<n ; i++)
			cout << arr[i] << " ";
		for(int j=0 ; j<n-l ; j++)
		cout << arr[j] << " ";

		cout << "\n";
	}
	return 0;
}