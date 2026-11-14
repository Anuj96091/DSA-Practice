#include<bits/stdc++.h>
using namespace std;
/*You are given an array containing N distinct numbers taken from the range 0 to N.
 There is exactly one number missing from this range.
Your task is to find and return the missing number.
*/
int main(){
    vector<int> arr1 = {1,2,5,3,6,8,4,9,0};
    
    int n = arr1.size();

    // //BY HASHING:
    // vector<int> hash(n+1 , 0);
    // for(int i = 0 ; i<n ;i++){
    //     hash[arr1[i]]++;
    // }

    // for(int i = 0 ; i<=n ; i++){
    //     if(hash[i]==0){
    //         cout<<i<<'\n';
    //         return 0;
    //     }
    // }

    //My approach/BETTER approach:
    
    // int sum = 0;
    // for(int i= 0 ; i<n ; i++){
    //     sum+=arr1[i]; 
    // }
    // int missing_number =n*(n+1)/2-sum;

    // cout<<"The missing number is :"<<missing_number<<'\n';

    // return 0;

    //OPTIMAL APPROACH:
    //USING XOR BITWISE OPERATOR 
    //WE KNOW XOR OF A NUMBER WITH ITSELF IS 0
    int XOR1 = 0;
    int XOR2 = 0;
    for(int i = 0 ; i<n ; i++){
        XOR1=XOR1^(i+1);
        XOR2 = XOR2^arr1[i];
    }
    cout<<(XOR1^XOR2);
    return 0;

}