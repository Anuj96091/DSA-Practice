/*
==========================================================
Topic      : Recursion
Source     : Striver A2Z DSA Course
Video      : Recursion (Lec-9)
Language   : C++
Author     : Anuj
Date        :01/08/2026
==========================================================

Concepts Covered
----------------
[] Print Name N Times
[] Print 1 to N
[] Print N to 1
[] Print 1 to N (Backtracking)
[] Print N to 1 (Backtracking)
[] Sum of First N Numbers
[] Factorial
[] Reverse an Array
[] Check Palindrome
[] Fibonacci Number

Time Complexities
-----------------
Print Name             : O(N)
Print 1 to N           : O(N)
Print N to 1           : O(N)
Backtracking Print     : O(N)
Sum of N               : O(N)
Factorial              : O(N)
Reverse Array          : O(N)
Palindrome             : O(N)
Fibonacci              : O(2^N)

Notes
-----
- Every recursive function must have a Base Case.
- Every recursive call must move towards the Base Case.
- Every recursive call creates a new stack frame.
- Too many recursive calls -> Stack Overflow.
- Recursive Faith:
      Assume recursion correctly solves the smaller problem.

==========================================================
*/

#include<bits/stdc++.h>
using namespace std;

//==========================================================
// 1. Print Name N Times
//==========================================================

void printName(int n)
{
    if(n==0){
        return ;
}
    cout<<"May GOD bless you"<<endl;
    printName(n-1);
    
}

// Notes:
//
//

//==========================================================
// 2. Print 1 to N
//==========================================================

void print1ToN(int i,int n)
{
    if(i>n){//Base condition.
        return;
    }
    cout<<i<<" ";
    print1ToN(i+1 , n);

}

// Notes:
//
//

//==========================================================
// 3. Print N to 1
//==========================================================

void printNTo1(int n)
{
    if(n<1){
        return;
    }
    cout<<n<<" ";
    printNTo1(n-1);
}

// Notes:
//
//

//==========================================================
// 4. Print 1 to N (Backtracking) i.e without using '+' in your code.
//==========================================================

void print1ToN_Backtracking(int n)
{
    if(n<1){
        return;
    }
        print1ToN_Backtracking(n-1);
        
        cout<<n<<" ";
        
    }

// Notes:
//
//

//==========================================================
// 5. Print N to 1 (Backtracking)
//==========================================================

void printNTo1_Backtracking(int i,int n)
{
    if(i>n){
        return;
    }
    printNTo1_Backtracking(i+1,n);
    cout<<i<<" ";

}

// Notes:
//
//

//==========================================================
// 6. Sum of First N Numbers
//==========================================================

int sum(int n)
{   
    if(n==0){
        return 0 ;
    }
    return n+sum(n-1);
}

// Notes:
//
//

//==========================================================
// 7. Factorial
//==========================================================

int factorial(int n)
{
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);

}

// Notes:
//
//

//==========================================================
// 8. Reverse Array
//==========================================================

void reverseArray(int arr[],int l,int r)
{
    if (l>=r){
        return;
    }
    // int temp = arr[r];
    // arr[r]=arr[l-r-1];
    // arr[l-r-1] = temp;
    swap(arr[l],arr[r]);
    reverseArray(arr , l+1 , r-1);
}

// Notes:
//
//

//==========================================================
// 9. Check Palindrome
//==========================================================

bool isPalindrome(string &s,int i)
{
    int size = s.length();
    if(i>=size/2){
        return true;
    }
    
    if(s[i]!=s[size-1-i]){
        return false;
    }
    return isPalindrome(s , i+1 );

    
    
}

// Notes:
//
//

//==========================================================
// 10. Fibonacci Number
//==========================================================

int fibonacci(int n)
{
    if(n<=1){
        return n;
    }
    return fibonacci(n-2)+fibonacci(n-1);

}

// Notes:
//
//

//==========================================================
// Driver Code
//==========================================================

int main()
{
    int n;
    cout<<"Enter the value of n here:"<<endl;
    cin>>n;
    // printName(n);

    // int i=1;
    // print1ToN(i ,n );

    // print1ToN_Backtracking(n);

    // int i=1;
    // printNTo1_Backtracking(i,n);

    // cout<<sum(n);

    // cout<<factorial(n);


    // int arr[]= {1,2,3,4,5,6};
    // int r =sizeof(arr)/sizeof(arr[0])-1;
    // reverseArray(arr ,0 , r );
    // for(int i =  0 ; i<r ; i++){
    //     cout<<arr[i]<<" ";
    // }

    // string s ;
    // cout<<"Enter a string here: "<<endl;
    // cin>>s;
    // int i = 0;
    // cout<<boolalpha;
    // cout<<isPalindrome(s, i );

    // cout<<fibonacci(n);
    return 0;
}

/*
==========================================================
Revision Notes
==========================================================

1.

2.

3.

4.

5.

==========================================================

Mistakes Made
==========================================================

1.

2.

3.


==========================================================
*/