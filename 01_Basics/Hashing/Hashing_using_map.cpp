#include<bits/stdc++.h>
using namespace std;
int main(){

//==============================================================================================================
// //HASHING BY USING MAP:
//==============================================================================================================
    int n;
    cout<<"Enter the size of ther vector"<<'\n';
    cin>>n;
    cout<<"Enter the "<<n<<" elements of the vector"<<'\n';
    vector<int>vec1(n , 0);
    for(int i= 0 ; i<n ; i++){
        cin >> vec1[i];
    }
    map<int , int > mpp;
    for(int i = 0 ; i<n ; i++){
        mpp[vec1[i]]+=1;//----------->this will create and increase the ith key by one each time. 
    }
    cout<<"Enter the number of element whose repetition you want to check"<<'\n';
    int elements;
    cin>>elements;
    while(elements--){
        cout<<"Enter the element :";
        int element;
        cin>>element;
        cout<<mpp[element]<<'\n';
    }

    // // TRAVERSING THROUGH A MAP TO CHECK REPETITION:

    /* While traversing through the map , one can check
    repetition of all the elements inside the map and since the
    map contains elements in sorted manner , the elements will be 
    printed in sorted manner.
    */
   for(auto it : mpp){
    cout<< it.first <<"---->"<<it.second<<'\n';
   }




    return 0;
}
/*======================================================================
            WHY USE MAP INSTEAD OF AN ARRAY OR VECTOR?
=======================================================================

At first glance, it may seem that we can use an array or vector to
count the frequency of elements. This is true only in certain cases.

-----------------------------------------------------------------------
1. USING AN ARRAY / VECTOR
-----------------------------------------------------------------------

Suppose the input array is:

    1 2 1 3 2 1

We can create a frequency array:

    int freq[4] = {0};

    for(int i = 0; i < n; i++)
        freq[arr[i]]++;

Result:

    Value      Frequency
      0             0
      1             3
      2             2
      3             1

Advantages:
-----------
✔ Very fast (O(1) access)
✔ Simple to implement

Limitation:
-----------
The maximum value of the elements must be known beforehand.

-----------------------------------------------------------------------
2. PROBLEM WITH ARRAYS / VECTORS
-----------------------------------------------------------------------

Suppose the input is:

    1000000000
    5
    7
    1000000000

To use an array, we would need:

    int freq[1000000001];

This is NOT practical because it requires an enormous amount of memory.

Similarly,

    vector<int> freq(1000000001);

would also consume a huge amount of memory.

Arrays and vectors allocate memory for EVERY possible index,
even if only a few values actually appear.

-----------------------------------------------------------------------
3. USING A MAP
-----------------------------------------------------------------------

Instead of creating space for every possible value, a map stores
ONLY the values that actually occur.

Example:

    map<int, int> mpp;

    mpp[1000000000]++;
    mpp[5]++;
    mpp[7]++;
    mpp[1000000000]++;

Map stores:

    Key             Frequency
    5                   1
    7                   1
    1000000000          2

Notice that only three keys are stored.

No unnecessary memory is wasted.

-----------------------------------------------------------------------
4. WHEN TO USE ARRAY / VECTOR
-----------------------------------------------------------------------

Use an array or vector when:

✔ The range of values is small.
✔ The maximum value is known.

Examples:

- Counting digits (0–9)
- Counting lowercase letters (26)
- Counting ASCII characters (256)

Example:

    vector<int> freq(26, 0);

-----------------------------------------------------------------------
5. WHEN TO USE MAP
-----------------------------------------------------------------------

Use a map when:

✔ Values can be very large.
✔ Values can be negative.
✔ The maximum value is unknown.
✔ Only a small number of distinct values actually occur.

Examples:

    1000000000
    -500
    99999999
    42

A map handles these values without wasting memory.

-----------------------------------------------------------------------
6. TIME COMPLEXITY COMPARISON
-----------------------------------------------------------------------

Array / Vector
--------------
Access      : O(1)
Update      : O(1)
Memory      : High if value range is large

Map
---
Search      : O(log n)
Insert      : O(log n)
Update      : O(log n)
Memory      : Stores only the keys that actually appear

unordered_map
-------------
Average Search : O(1)
Average Insert : O(1)
Average Update : O(1)

-----------------------------------------------------------------------
7. SUMMARY
-----------------------------------------------------------------------

Array / Vector:
✔ Faster
✔ Best for small, fixed ranges
✖ Wastes memory for large value ranges

Map:
✔ Stores only the required keys
✔ Handles very large and negative values
✔ Memory efficient
✖ Slightly slower (O(log n))

Rule of Thumb:
--------------
If the value range is small → Use an Array/Vector.

If the value range is large or unknown → Use a Map
(or unordered_map for average O(1) operations).

======================================================================*/