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
        string s;
        cin>>s;
        ll count = 0;
        for(ll i=0;i+2<n;i++){
            if(s[i]=='p'&&s[i+1]=='i'&&s[i+2]=='e'){
                count++;
                i = i+2;
                continue;
            }
            if(s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p'){
                if(i<n-4){
                    if(s[i+3]=='i'&&s[i+4]=='e'){
                        count++;
                        i = i+4;
                        continue;
                    }
                }
                count++;
                i=i+2;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}