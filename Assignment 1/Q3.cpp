#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    string str;
    cout<<"Enter a word = ";
    getline(cin,str);
    int len = str.size();
    bool pal = true;
    int i;
    for (i=0;i<len/2;i++){
        if ((str[i])!=(str[len-i-1])){
            pal=false;
            break;
        }
    }
    pal?cout<<"word is a palindrome":cout<<"Word is not a palindrome";
    for(int i=0; i<str.length(); i++){
        if(str[i]!=' '){
            str[i]='$';
        }
    }
    cout<<endl<<"String after replacing characters by $ = "<<str;
    return 0;
}