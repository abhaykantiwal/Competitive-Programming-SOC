#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=b-1;i>=a;i--)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,m;
        cin>>a>>b>>c>>m;
        ll maxpair = (a-1)+(b-1)+(c-1);
        vector<ll>arr(3);
        arr[0] = a; arr[1] = b; arr[2] = c;
        sort(arr.begin(),arr.end());
        ll minpair = arr[2]-arr[1]-arr[0]-1;
        if(m<=maxpair && m>=minpair){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}