#include <iostream>
using namespace std;

void solution(string s,int p){
    int freq[26]={0};
    long int sum=0;
    for(char c:s){
        sum+=(int)(c-'a'+1);
        freq[(int)(c-'a')]++;
    }
    int index=25;
    while(sum>p&&index>=0){
        if(!freq[index]){
            index--;
            continue;
        }
        sum-=(index+1);
        freq[index]--;
    } 
    for(char c:s){
        index=(int)(c-'a');
        if(freq[index]){
            cout<<c;
            freq[index]--;
        }
    }
    cout<<endl;
    return;
}

int main(){
    int t;
    string s;
    int p;
    cin>>t;
    while(t--){
        cin>>s;
        cin>>p;
        solution(s,p);
    }
}
