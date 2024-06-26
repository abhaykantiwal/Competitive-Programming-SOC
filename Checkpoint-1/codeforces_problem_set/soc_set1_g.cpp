#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=b-1;i>=a;i--)
bool isPrime(double n){ll t=n; if(t!=n){return false;} if (t <= 1){return false;}
    for(ll i = 2; i <= sqrt(t); i++){if(t%i==0){return false;}}return true;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll k,q;
        cin>>k>>q;
        vector<ll>a(k),arr(q);
        fi(i,0,k){
            cin>>a[i];
        } 
        fi(i,0,q){
            cin>>arr[i];
        } 
        vector<ll>ans(q);
        ll firstofa=a[0];
        fi(i,0,q){
            if(arr[i]<firstofa){
                ans[i] = arr[i];
            }
            else{
                ans[i] = firstofa-1;
            }
        } 
        fi(i,0,q){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}