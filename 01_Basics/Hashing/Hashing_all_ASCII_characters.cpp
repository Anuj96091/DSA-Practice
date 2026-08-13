#include<bits/stdc++.h>
using namespace std;
int main(){
    /*Q: suppose a user enters a string inside of which there can be any ASCII character,how many times
     does a certian character element appears in this string ?
    */
    string s;
    cout<<"Enter a string here:"<<'\n';
// cin >> s reads only the first word.
// If the input contains spaces, it stops reading at the first space.
// To read the entire line, use getline(cin, s). 
//to avoid this we will use getline(cin, variable_name); function
    getline(cin,s);
    int length = s.length();

    //precompute:
    int hash[256] = {0};
    for(int i = 0 ; i<length ; i++){
        hash[s[i]] +=1;
    }
    int elements;
    cout<<"Enter the number of elements whose repetition you want to check:"<<'\n';
    cin>>elements;
    while(elements--){
        char check;
        cout<<"Enter the element you want to check:"<<'\n';
        cin>>check;
        
        cout<<hash[check]<<'\n';
    }



    return 0;
}