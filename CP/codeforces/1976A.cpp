#include <iostream>
using namespace std;

void solution(int n,string s){
    int prevdigit=-1;
    char prevchar='\0';
    int index=0;
    if(isdigit(s[0])){
        for(;index<n;index++){
            if(!isdigit(s[index]))
                break;
            if(prevdigit>((int)(s[index]-'0'))){
                cout<<"NO\n";
                return;
            }
            prevdigit=((int)(s[index]-'0'));
        }
    }
    for(;index<n;index++){
            if(isdigit(s[index])){
                cout<<"NO\n";
                return;
            }
                
            if(prevchar>s[index]){
                cout<<"NO\n";
                return;
            }
            prevchar=s[index];
        }
    cout<<"YES\n";
    return;

}

int main(){
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        solution(n,s);
    }
}