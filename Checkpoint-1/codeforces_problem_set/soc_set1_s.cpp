#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=b-1;i>=a;i--)
//bool isPrime(double n){ll t=n; if(t!=n){return false;} if (t <= 1){return false;}
//	for(ll i = 2; i <= sqrt(t); i++){if(t%i==0){return false;}}return true;
//}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll len = s.length();
        bool check = false;
        if((len)%2==1){
            cout<<"NO\n";
        } 
        else{
            if(s[0]==')'|| s[len-1]=='('){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
    }
    return 0;
}