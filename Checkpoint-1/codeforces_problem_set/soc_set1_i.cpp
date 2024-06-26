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
        if(n==1){
            cout<<-1<<endl;
            continue;
        }
        set<ll>s;
        fi(i,1,n+1){
            s.insert(i);
        }
        ll count = 0;
        vector<ll>ans;
        fi(i,0,n-2){
            for(auto it = s.begin();it!=s.end();it++){
                if(*it!=arr[i]){
                    ans.push_back(*it);
                    s.erase(it);
                    break;
                }
            }
        }
        ll temp = 0 ;
        ll first,second;
        for(auto it = s.begin();it!=s.end();it++){
            if(temp==0){
                first = *it;
                temp++;
            }
            else{
                second = *it;
            }
        }
        if(arr[n-2]==first){
            ans.push_back(second);
            ans.push_back(first);
            fi(i,0,n){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
            continue;
        }
        if(arr[n-2]==second){
            ans.push_back(first);
            ans.push_back(second);
            fi(i,0,n){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
            continue;
        }
        if(arr[n-1]==first){
            ans.push_back(first);
            ans.push_back(second); 
            fi(i,0,n){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
            continue;
        }
        if(arr[n-1]==second){
            ans.push_back(second);
            ans.push_back(first);
            fi(i,0,n){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
            continue;
        }
        ans.push_back(first);
        ans.push_back(second);
        fi(i,0,n){
            cout<<ans[i]<<" ";
        }
        cout<<endl; 
    }
    return 0;
}