#include <bits/stdc++.h>
using namespace std;
 
#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
 
const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
 

 
int n,a[100];
 
bool check(){
	if(a[1]!=1 || a[n]!=0)
		return false;
	for(int i=1;i<n;i++){
		if(a[i]==1 && a[i+1]==1)
			return false;
	}
	return true;
}
 
void ql(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			if(check()){
				for(int j=1;j<=n;j++)
					cout<<(a[j] ? 'H' : 'A');
				cout<<endl;
			}
		}
		else ql(i+1);
	}
}
int main(){

	int t;cin>>t;
	while(t--){
		cin>>n;
		ql(1);
	}
}
