#include<bits/stdc++.h>
using namespace std;

char lexicographically(int n,char target,char arr[]){
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            return arr[i+1];
        }
        
        else{
            return arr[0];
        }
    }
    return arr[0];
}

int main(){
    int n;
    cin>>n;
   
    char target;
    cin>>target;
    
    char arr[n];
    
    // input of elements
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // output of elements 
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    
    cout<<endl;
    // function calling 
    char result = lexicographically(n, target, arr);
    cout<<"The smallest character that is lexicographically "<<result<<endl;
    return 0;
}