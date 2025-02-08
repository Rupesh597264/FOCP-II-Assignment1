#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    int n,i,j;
    cout<<"1.) Enter no. of elements to enter = ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl<<"2.) Reverse array = ";
    for(i=n-1;i>=0;i--){
        cout<<arr[i];
    }
    int maxele=arr[0];
    int minele=arr[0];
    for(i=1;i<n;++i){
        if(arr[i]>maxele){
            maxele=arr[i]-1;
        }
        if(arr[i]<minele){
            minele=arr[i]+1;
        }
    }
    cout<<endl<<"Second largest value = "<<maxele;
    cout<<endl<<"Second smallest value = "<<minele;
    return 0;
}