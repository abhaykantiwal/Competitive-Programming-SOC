#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=b-1;i>=a;i--)
// bool isPrime(double n){ll t=n; if(t!=n){return false;} if (t <= 1){return false;}
//     for(ll i = 2; i <= sqrt(t); i++){if(t%i==0){return false;}}return true;
// }
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a==1){ 
            cout<<b*b<<endl;
            continue;
        } 
        if(b%a==0){
            ll ans = b*(b/a);
            cout<<ans<<endl;
            continue;
        }
        else{
            ll ans = (a*b)/(__gcd(a,b));
            cout<<ans<<endl; 
        }
    }
    return 0;
}