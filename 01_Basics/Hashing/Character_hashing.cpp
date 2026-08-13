#include<bits/stdc++.h>
using namespace std;
int main(){
    // suppose a string "Hello world "
    //how many times does a certian character element appears in this string ?
    //we will design a hash array such that it will store the nuber of iteration of each element in it 
    //for this we will use ASCII values of characters.
    //hashing tremendously reduces the time complexity in these cases.

    /*Q: suppose a user enters a string of lower case letters ,how many times
     does a certian character element appears in this string ?
    */
    string s;
    cout<<"Enter a string here:"<<'\n';
// cin >> s reads only the first word.
// If the input contains spaces, it stops reading at the first space.
// To read the entire line, use getline(cin, s).    //to avoid this we will use getline(cin, variable_name); function
    getline(cin,s);
    int length = s.length();

    //precompute:
    int hash[26] = {0};
    for(int i = 0 ; i<length ; i++){
        if(s[i]<'a'|| s[i]>'z'){
            continue;
        }
        int store_var = s[i]-'a';
        hash[store_var] +=1;
    }
    int elements;
    cout<<"Enter the number of elements whose repetition you want to check:"<<'\n';
    cin>>elements;
    while(elements--){
        char check;
        cout<<"Enter the character element you want to check:"<<'\n';
        cin>>check;
        if(check<'a'|| check>'z'){
            cout<<"Enter a valid lower case letter";
            continue;
        }
    

        cout<<hash[check-'a']<<'\n';
    }



    return 0;
}