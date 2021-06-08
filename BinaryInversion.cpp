#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll n , a , b , x;
	cin >> n >> a >> x;
	b = n-a;
	
	if(x > a*b)
	    cout << "-1";
    else {
        ll q=x/b , r=x%b;
        
        b -= r;
        
        a -= q+1;
        while(a--)
            cout << "0 ";
            
        while(r--)
            cout << "1 ";
        
        cout << "0 ";
            
        while(b--)
            cout << "1 ";
            
        while(q--)
            cout << "0 ";
    }
	return 0;
}