#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=b-1;i>=a;i--)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> a(n), b(n-1), c(n-2);
    fi(i,0,n){
        cin>>a[i];
    }
    fi(i,0,n-1){
        cin>>b[i];
    }
    fi(i,0,n-2){
        cin>>c[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(), b.end());
    sort(c.begin(),c.end());
    ll i =0;
    while(i<n-1){
        if(a[i]!=b[i]){
            break;
        }
        i++;
    }
    cout<<a[i]<<"\n";
    i = 0;
    while(i<n-2){
        if(b[i]!=c[i]){
            break;
        }
        i++;
    }
    cout<<b[i]<<"\n";
    return 0;
}