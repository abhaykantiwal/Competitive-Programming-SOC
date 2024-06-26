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
        ll n;
        cin>>n;
        vector<ll>arr(n);
        fi(i,0,n){
            cin>>arr[i];
        }  
        ll check = -1;
        ll sum = 0;
        vector<ll>s;
        fi(i,0,n){
            if(arr[i]==0&&check ==-1){
                continue;
            }
            if(arr[i]!=0){
                s.push_back(arr[i]);
                check = 1;
                continue;
            }
            if(arr[i]==0&&check==1){
                sort(s.begin(),s.end(),greater<ll>());
                ll count = 0;
                ll tsize = s.size();
                if(tsize>0){
                    sum+=s[0];
                    ll delete1 = 0;
                    for(auto it=s.begin();it!=s.end()&&delete1<1;it++){
                        s.erase(it);
                        delete1++;
                    }
                    continue;
                }
                continue;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}