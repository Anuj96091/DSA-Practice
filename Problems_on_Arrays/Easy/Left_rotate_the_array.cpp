#include<bits/stdc++.h>
using namespace std;
int main(){
    //LEFT ROTATE AN ARRAY BY K TIMES:
    vector<int> arr1 ;
    int size ;
    cout<<"Enter the size of the array :\n";
    cin>>size;
    if(size == 0 ){
        return 0;
    }
    cout<<"Enter the elements \n";
    for(int i = 0 ; i<size ; i++){
        int temp = 0;
        cin>>temp;
        arr1.emplace_back(temp);
    }
    int k ;
    cout<<"Enter the value of k here \n";
    cin>>k;
    k = k%size;
    //BRUTE FORCE METHOD:

    
    // for(int i = 0 ; i<k ; i++){
    //     int temp = arr1[0];
    //     for(int i = 0 ; i<=size-2 ; i++){
    //         arr1[i]=arr1[i+1];
    //     }
    //     arr1[size-1] = temp;
    // }
    // for(int i = 0 ; i<size ; i++){
    //     cout<<arr1[i]<<" ";
    // }

    //OPTIMAL SOLUTION:
    reverse(arr1.begin() , arr1.begin()+k);
    reverse(arr1.begin()+k , arr1.end());
    reverse(arr1.begin() , arr1.end());
    for(int i = 0 ; i<size ; i++){
    cout<<arr1[i]<<" ";
    }

    

    return 0;
}