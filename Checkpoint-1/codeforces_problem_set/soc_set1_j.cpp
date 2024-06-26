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
        ll n;
        cin>>n;
        vector<ll>arr(n);
        fi(i,0,n){
            cin>>arr[i];
        }
        ll first = 0;
        ll last = n-1;
        ll got = -1; 
        for(ll i=n;i>=1&&first<last;i--){
            if(arr[first]==i){
                first = first+1;
                continue;
            } 
            if(arr[last]==i){
                last = last-1;
                continue;
            } 
            got = i;
            break;
        } 
        if(got==-1){
            cout<<"NO\n";
            continue; 
        }
        fi(i,0,n){
            if(arr[i]==got){
                cout<<"YES\n"<<first+1<<" "<<i+1<<" "<<last+1<<endl;
                break; 
            }
        } 
    }
    return 0;
}