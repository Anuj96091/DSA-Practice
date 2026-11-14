#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr1;
    arr1 = {5,5,5};
    int size = arr1.size();
    //MY APPROACH:
//     set<int> st;
    
//     for(int i = 0 ; i<arr1.size() ;i++){
//         st.insert(arr1[i]);
//     }
//     if(st.size() < 2){
//     cout << -1;
//     return 0;
// }
//     auto it_end = st.end();
//     auto it_start = st.begin();
//     it_end--;
//     for(int i = 0 ; i<1 ; i++){
//         it_start++;
//         it_end--;
//     }
//     cout<<"The second max element is: "<<*it_end<<'\n';
//     cout<<"The second smallest element is: "<<*it_start<<'\n';


// OPTIMAL APPROACH:
int max=INT_MIN;
int second_max = INT_MIN; 
for(int i = 0 ; i<size ; i++){
    if(max<arr1[i] ){
        second_max = max;
        max = arr1[i];

    }
    else{
        if(second_max<arr1[i] && arr1[i]!=max){
            second_max = arr1[i];
        }
    }
}
if(second_max == INT_MIN){
    cout<<-1;
    return 0;
}
cout<<"The second largest element in the array is :"<<second_max<<'\n';

    return 0;
}