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
        ll n,k;
        cin>>n>>k;
        if(n==k){
            fi(i,0,n){
                cout<<1<<" ";
            }
            cout<<endl;
            continue;
        }
        if(k==1){
            vector<ll>arr(n);
            arr[n-1] = 2;
            arr[n-2] = 1;
            fi(i,0,n-2){
                arr[i] = i+3;
            }
            fi(i,0,n){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            continue;
        }
        cout<<-1<<endl;
        continue;
    }
    return 0;
}