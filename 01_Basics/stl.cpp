/*
=================================================

Striver A2Z DSA Sheet

Topic:
C++ STL

Concepts:
- Pairs
- Vectors
- Lists
- Stack
- Queue
- Priority Queue
- Set
- Map
- Algorithms

=================================================
*/
/*
STL (Standard Template Library):

STL is a set of pre-defined template classes and functions in C++ 
that provides commonly used data structures and algorithms.

It helps programmers write efficient and reusable code without 
implementing these structures from scratch.

Main Components of STL:
1. Containers
2. Iterators
3. Algorithms
4. Functions/Functors
*/

#include <bits/stdc++.h>
using namespace std;


// Pair
/*
PAIR: (lies inside the utility library)

- Part of STL
- Stores two values together
- Values can have same or different data types
- Access using:
    first
    second
*/
void explainPair(){
    pair<int , int> pair_name = {3,4};// make any pair using this syntax.
    cout<<"The first value inside pair: "<<  pair_name.first << endl<<"The second value inside pair: "<<pair_name.second<<endl;

    pair<int , pair<int,float>> p = {3 , {6 , 7.5}};// Through the property of nested pairs we can store more than two values inside pair.
    cout<<p.first << " "<<p.second.first<<" " << p.second.second<<endl;
    pair<int , string> arr[2] = { {1,"hello"} , {2,"world"}};//Arrays can also be made with the elements of pair data types.
//  XX  cout<<arr[1]<<endl;
    cout<<arr[1].first<<" " <<arr[1].second;
}






// Vector
/*
VECTOR:

- Vector is a dynamic array in STL.
- Size can change during runtime.
- Elements are stored in continuous memory.
- Supports random access.

Common functions:

push_back()and  emplace_back() -> add element at end 
pop_back()  -> remove last element
size()      -> number of elements
begin()     -> iterator to first element
end()       -> iterator after last element
*/
/*
push_back:
Creates an object first and then inserts it.

emplace_back:
Constructs the object directly inside the vector.

For simple data types difference is negligible.
For complex objects such as pairs emplace_back can be faster.
*/

void explainVector(){

    //Vector initialization

    vector<int> vector_name = {1,2,3,4,5,6,7,8,9};
    cout<<vector_name[3]<<endl; // by this method one can access any element inside a vector.
    //-----------------------------VECTOR FUNCTIONS----------------------------------------------------

    //push_back and emplace_back function

    vector_name.push_back(0);
    vector_name.emplace_back(1);
    for(int i = 0 ; i<vector_name.size() ; i++){
        cout<<vector_name[i]<<" ";
    }
    cout<<endl;


    //vector resizing by using resize function

    vector_name.resize(15,99);//will resize the vector to a total of 15 elements and initialize the remaining element with 99 .
    for(int i= 0 ;i<vector_name.size() ; i++ ){
        cout<<vector_name[i]<<" ";//The output will be elements of vector and the rest of the elements will be 99 
    }
    cout<<endl;



    //vector initializing by giving number of elements and initial value for each element

    vector<int> v1(10 , 100);//This creates a vector with 10 elements and all the elements initially being 100.
    for(int i = 0 ; i<v1.size() ; i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    //vector function back() will return the last element of the vector
    v1[v1.size()-1] = 57;
    cout<<"Last element of v1 vector \n"<<v1.back()<<endl;

    //To access any element from within the vector one can use either methods:
    cout<<v1[5]<<"or"<<v1.at(5)<<endl;



    /* Another way to get elements from the inside of a vector 
       is by using an iterator

       An iterator is an object that points to elements in a container
        (like a pointer) and allows you to traverse the container one 
        element at a time.
    */
   // Initialization of Iterator using begin function

    vector<int>::iterator it = vector_name.begin();//will point to the first element of the vector
    cout<<"First element of the vector: "<<*it<<endl;
    // similarly end function:
    // it = vector_name.end();
    // cout<<*it<<endl; this will print some garbage value as end will refer to the position after the last element


    //similarly two more functions exist rend() and rbegin() 


    // Printing the whole vector using iterators and for loop: 
    for(auto i = vector_name.begin() ; i!= vector_name.end() ; i++){
        cout<<*i<<" ";

    }
    cout<<endl;
    // Using for-each loop or range based for loop printing vector elements:
    for(auto it : vector_name){
        cout<<it<<" ";
    }
    cout<<endl;

    //Erasing an element from a vector using erase function :
    // vector_name.erase(vector_name.begin());
    vector_name.erase(it);//erase function takes some kind of location pointer or iterator as input
    for(auto iterator = vector_name.begin() ; iterator <vector_name.end() ; iterator++){
        cout<<*iterator<<" ";
    }
    cout<<endl;
    //Erasing multiple concicutive elements :
    auto start_element = vector_name.begin() ; //this will point to the first element inside the vector (an iterator)
    auto end_element = vector_name.end(); // we can not use vector_name.back() here ;)
    vector_name.back() = 97;
    vector_name.erase(start_element, end_element-1 );
    for (auto x : vector_name) {//since only last element is left after erasure ,only it will be printed
    cout << x << " ";
    }
    cout<<endl;
    
// Insert function:

    cout<<"Inserting a single element inside a vector at any position."<<endl;
    vector<int> v2(4 , 23);
    v2.insert(v2.begin()+2 , 99);
    for( auto it : v2){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<"Inserting multiple element inside a vector"<<endl;
    
    vector<int> v3(4 , 23);
    v3.insert(v3.begin()+3 , 4 , 100 );
    for(auto it :v3){
        cout<<it<<" ";
    }
    cout<<endl;


// pop_back  function:
    cout<<"pop_back function pops/removes the last element of the vector"<<endl;
    v3.pop_back();
    for(auto it : v3){
        cout<<it << " ";
    }
    cout<<endl;


// swap functoin swaps two vectors elements 
    cout<<"Swaping elements of two vectors using swap function "<<endl;
    cout<<"Before swaping the elements "<<endl;
    cout<<"v2 :"<<endl;
    for(auto it : v2){
        cout<<it<< " ";

    }
    cout<<endl;
    cout<<"v3 :"<<endl;
    for(auto it : v3){
        cout<<it<< " ";

    }    
    cout<<endl;
    v2.swap(v3);
    cout<<"After swaping vector v2 becomes :"<<endl;
    for(auto it : v2){
        cout<<it<< " ";

    }
    cout<<endl;
     cout<<"adn vector v3 becomes :"<<endl;
    for(auto it : v3){
        cout<<it<< " ";

    }
    cout<<endl;
    


// clear function
    v2.clear();// this erases the entire vector
// empty function
    cout<<v3.empty()<<endl; // returns 0 if vector is not empty
    cout<<v2.empty()<<endl;//returns 1 if vector is empty


}


// List
void explainList(){
//==================== LIST (STL) ====================

// list = Doubly Linked List (non-contiguous memory)

// No random access (cannot use l[i])

// Creation
// list<int> l;
//or
list<int> l={1,2,3};

// Insertion
l.push_back(99);      // O(1)
l.push_front(0);     // O(1)
l.insert(l.begin(),-1);      // O(1)
    for(auto it : l){
        cout<<it<<" ";
    }
    cout<<endl;

// Deletion
l.pop_back();        // O(1)
l.pop_front();       // O(1)
l.erase(l.begin());         // O(1)
l.remove(0);         // Remove all occurrences


// Capacity
// l.size();
// l.empty();
// l.clear();

// Other useful functions
// l.sort();            // O(n log n)
// l.reverse();         // O(n)
// l.unique();          // Removes adjacent duplicates
// l.swap(l2);
// l.resize(n);

// Traversal
// for(auto x:l) cout<<x<<" ";

// for(auto it=l.begin();it!=l.end();it++)
//     cout<<*it<<" ";

// // Reverse traversal
// for(auto it=l.rbegin();it!=l.rend();it++)
//     cout<<*it<<" ";

// Time Complexity
// push_front/back -> O(1)
// pop_front/back  -> O(1)
// insert/erase(iterator) -> O(1)
// indexing -> NOT supported
// search -> O(n)
// sort -> O(n log n)


}

//------------------------------------- To be done ----------------------------------------------
// // Stack
// void explainStack(){



// }


// // Queue 
// void explainQueue(){



// }


// // Priority Queue
// void explainPriorityQueue(){



// }


// // Set
// void explainSet(){



// }


// // Map
// void explainMap(){



// }


// // Algorithms
// void explainAlgorithms(){



// }


int main(){

    // explainPair();
    explainVector();
    // explainList();
    return 0;
}