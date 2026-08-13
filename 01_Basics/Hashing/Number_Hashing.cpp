#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    Hashing is a technique of mapping a key to an index using a
     hash function for fast searching, insertion, and deletion.
    */

    int n;
    cout<<"Enter the number of elements: "<<'\n';
    cin>>n;
    cout<<"Enter the elements"<<'\n';
    int arr1[n];  
    /* Inside the main function the maximum possible elements an array can contain 
    is 10^6 for an integer array and 10^7 for a boolean array;
    Outside the main function , if one declare a global array , it can store upto 10^7 elements 
    if it is an integer array and 10^8 if it is a boolean array
    */
    for(int i = 0 ; i<n  ; i++){
        cin>>arr1[i];

    }
    //precompute:

    int hash[100] = {0};//for elements value upto 100
    for(int i = 0 ; i<n ; i++){
        hash[arr1[i]]+=1;

    }

    //checking repetition of elements:
    cout<<"Enter the number of elements whose repetition you want to check : "<<'\n';
    int elements;
    cin>>elements;
    while(elements--){
        int check;
        cout<<"Enter the numerical element whose repetition you want to check"<<'\n';
        cin>>check;
        cout<<hash[check]<<'\n';
    }

    return 0;
}