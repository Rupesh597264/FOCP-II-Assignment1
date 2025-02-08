#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    int n,i,j,count=0;
    cout<<"Enter an integer = ";
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            count++;
    }
    }
    if(count==0){
        cout<<n<<" is a Prime no.";
        int nextprime=n+1;
    while(true){
        int prime=1;
        for(i=2;i<nextprime;i++){
            if(nextprime%i==0){
                prime=0;
                break;
            }
        }if(prime==1){
    cout<<endl<<"Next prime no. is = "<<nextprime;
    break;
    }nextprime++;
    }
    }else {
        cout<<n<<" is a Composite no."<<endl<<"It's factors are - ";
         for(i=1;i<n;i++){
        if(n%i==0){
            cout<<i<<" ";
    }}}
    return 0;
}