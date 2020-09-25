#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
typedef priority_queue<int, vi, greater<int>> minpq;
const int mod = 1000000007;


int fun(string s){
    int ans = 0;
    for(auto &x : s){
        if(x == '('){
            ans--;
        }else{
            ans++;
        }
    }
    return ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
	string t;
	cin >> n >> k >> t;
	int count = 1;
	int pos = 1;
	string ans = t;
	while (count < k) {
		if (pos >= ans.size()) {
			ans += t;
			++count;
		} else {
			bool ok = true;
			int len = 0;
			for (int i = 0; i < t.size(); ++i) {
				if (pos + i >= ans.size()) break;
				++len;
				if (ans[pos + i] != t[i]) ok = false;
			}
			if (ok) {
				ans += t.substr(len);
				++count;
			}
		}
		++pos;
	}
	
	cout << ans << endl;
	
}