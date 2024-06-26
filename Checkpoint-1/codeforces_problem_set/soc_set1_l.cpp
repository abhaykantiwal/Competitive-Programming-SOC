#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=b-1;i>=a;i--)
bool check(char s[4][4]){
    fi(i,0,3){
        fi(j,0,3){
            if((s[i][j]==s[i][j+1])&& (s[i][j+1]==s[i+1][j+1])&&(s[i+1][j]==s[i+1][j+1])){
                return true;
            }
        }
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char s[4][4];
    fi(i,0,4){
        fi(j,0,4){
            cin>>s[i][j];
        }
    } 
    if(check(s)){
        cout<<"YES\n";
        return 0;
    }
    fi(ii,0,4) {
        fi(jj,0,4) {
            if (s[ii][jj] == '.') {
                s[ii][jj] = '#';
                if(check(s)){
                    cout<<"YES\n";
                    return 0;
                } 
                s[ii][jj] = '.';
            }
            else {
                s[ii][jj] = '.';
                if(check(s)){
                    cout<<"YES\n";
                    return 0;
                } 
                s[ii][jj] = '#';
            }
        }
    }
    cout<<"NO\n";
    return 0;
}