#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string s);

int gcd(int a,int b){
        if(b>a){
            int temp=b;
            b=a;
            a=b;
        }
        if(a%b==0)
            return b;
        return gcd(b,a%b);
    }


int main(){
    cout<<isPalindrome("0P")<<endl;
    cout<<gcd(18,12);
}

bool isPalindrome(string s) {
        int start = 0, end = s.length() - 1;
        while (start < end) {
            if (toupper(s[start]) < 'A' || toupper(s[start]) > 'Z')
                {start++;continue;}
            if (toupper(s[end]) < 'A' || toupper(s[end]) > 'Z')
                {end--;continue;}
            //if(start>=end)break;
            if (toupper(s[start++]) != toupper(s[end--]))
                return false;
        }
        return true;
    }