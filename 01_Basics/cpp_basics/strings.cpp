/*
===============================================================================

                     C++ Strings notes.

===============================================================================
*/

#include<bits/stdc++.h>
using namespace std;

void initialization(){
    string s1;                //will crate an empty string ""
    string s2= "Hello";       //will store in string variable
    string s3("WORLD");       // constructor style.
    string s4(5 , 'x');       //"xxxxx" will print the inputed character n number of times , like here 5 is number of character and 'x' is the character .
    string s5(s2);            // will create a deep copy of s2 in string variable s5.
    string s6(s2 , 1, 3);     // substring of s2 starting at index 1 , length 3 , will be stored in string s6.
    cout<<s1<<'\n'<<s2<<'\n'<<s3<<'\n'<<s4<<'\n'<<s5<<'\n'<<s6<<'\n';
}
/*
SIZE / LENGTH / CAPACITY FUNCTIONS
============================================================================
    length()   -> number of characters (same as size())
    size()     -> number of characters
    capacity() -> allocated storage (may be >= size)
    empty()    -> true if size() == 0
    resize(n)  -> changes size to n (truncates or pads with '\0')
    clear()    -> makes the string empty
*/
void size_length_capacity(){
    string s = "Hello World!";
    cout<< "length() :"<<s.length()<<"\n";
    cout<< "size() :"<<s.size()<<"\n";
    cout<< "empty() :"<<s.empty()<<"\n";//will return 1 (true) if size = 0 otherwise false (0).
    s.resize(6);
    cout<<"After using s.resize(6) , the final string becomes :"<<s<<"\n";

    s.clear();
    cout<<"After using the s.clear() function , the string becomes:"<<s<<"\n";

}
void accessing_character(){
    string s = "Hello";
    cout<<"s[0]:"<< s[0]<<'\n';
    cout<< "s.at(1):"<< s.at(1)<<"\n";
    cout<<"s.front():"<<s.front()<<"\n";
    cout<<"s.back():"<<s.back()<<"\n";

}
/*
============================================================================
MODIFYING STRINGS
============================================================================
    +=, append()   -> add to the end
    insert(pos,s)  -> insert at position
    erase(pos,len) -> remove characters
    replace(pos,len,s) -> replace part of string
    push_back(c)   -> add single char at end
    pop_back()     -> remove last char
    assign()       -> replace entire content
*/
void modifying_string(){
    string s = "Hello world!";
    
}









int main(){
    // initialization();
    // size_length_capacity();
    // accessing_character();
    modifying_strings();
    return 0;
}








