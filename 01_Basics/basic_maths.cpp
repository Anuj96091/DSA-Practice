/*
==========================================================
Topic      : Basic Maths
Source     : Striver A2Z DSA Course
Video      : Basic Maths
Language   : C++
Author     : Anuj
Date        :
==========================================================

Concepts Covered
----------------
[] Count Digits
[] Reverse Number
[] Palindrome Number
[] Armstrong Number
[] Print Divisors
[] Check Prime
[] GCD / HCF (Euclidean Algorithm)

Time Complexities
-----------------
Count Digits         : O(log10 N)
Reverse Number       : O(log10 N)
Palindrome           : O(log10 N)
Armstrong            : O(log10 N)
Print Divisors       : O(√N)
Prime Check          : O(√N)
GCD                  : O(log(min(a,b)))

Notes
-----
- Digits = log10(N) + 1 (for N > 0)
- Use modulo (%) to extract last digit.
- Integer division removes last digit.
- Efficient divisor traversal till sqrt(N).
- Euclidean Algorithm:
      gcd(a,b) = gcd(b,a%b)

==========================================================
*/

#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v)
{
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

//=========================================================
// 1. Count Digits
//=========================================================

int countDigits(int n)
{
    // My attempt:
    if(n == 0 ){
        cout<<"Total number of digits in the entered number is :" << endl;
        return 1;
    }
    int digits = 0;
    while (n > 0)
    {
        digits++;
        n = n / 10;
    }

    cout << "Total number of digits in the entered number is :" << endl;
    return digits;
}

// Notes:
//
//

//=========================================================
// 2. Reverse Number
//=========================================================

int reverseNumber(int n)
{
    // cout<<"Number obtained after reversing the digits of the given number is :"<<endl;
    // while(n>0){

    //     if(n%10 != 0 ){
    //         cout<<n%10;
    //         n/=10;

    //     }
    //     else{
    //         n/=10;
    //     }

    // }
    /*The number is not actually reversed instead it is printed in
     reverse order one by one , what we need is a single number which is
      reverse of the actcul number and only printed once
    */

    int reverse_number = 0;
    int temp = 0;
    while (n > 0)
    {

        temp = n % 10;
        n = n / 10;

        reverse_number = 10 * reverse_number + temp;
    }

    return reverse_number;
}
// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
//  int reverse_number=0;

// while(x!=0){

//         int temp = x%10;
//         x /=10;
//         if(reverse_number > INT_MAX / 10 || (reverse_number == INT_MAX / 10 && temp > 7))
//         return 0;
//         if(reverse_number< INT_MIN/10|| (reverse_number == INT_MIN/10 && temp<-8))
//         return 0;
//         reverse_number = 10*reverse_number + temp;
//         }
//     return reverse_number;

// Notes:
// Why compare with INT_MAX / 10 instead of INT_MAX?

// Because reverse_number * 10 may itself overflow.
// Overflow happens BEFORE we can compare the result.
//
// Therefore, we check beforehand:
//
// reverse_number > INT_MAX / 10
//
// so that multiplication is never performed if it would overflow.

//=========================================================
// 3. Palindrome Number
//=========================================================

bool isPalindrome(int n)
{
    int original_number = n;
    int reverse_number = 0;
    while (n > 0)
    {
        int temp = n % 10;
        n = n / 10;
        reverse_number = reverse_number * 10 + temp;
    }
    if (original_number == 0)
    {
        return true;
    }
    else if (original_number < 0)
    {
        return false;
    }

    else if (reverse_number == original_number)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Constraints:

// -231 <= x <= 231 - 1

//     bool isPalindrome(int x) {
//     int original_number = x;

//     int reverse_number = 0;
//     if(x<0){
//         return false ;
//     }
//     while(x>0){
//         int temp = x%10;
//         x=x/10;
//         if(reverse_number > INT_MAX/10 || (reverse_number == INT_MAX/10 && temp>7)){
//             return false;
//         }

//         reverse_number = reverse_number*10+temp;
//     }
//     if(original_number == 0){
//         return true;
//     }

//     else if(reverse_number == original_number){
//         return true;
//     }
//     else{
//         return false;
//     }

//     }
// };

// Notes:
//
//

//=========================================================
// 4. Armstrong Number
//=========================================================

bool isArmstrong(int n)
{
    /*An Armstrong number (also called a narcissistic number) is a number that is equal
     to the sum of its own digits, where each digit is raised to the power of the total number
     of digits in the number.
    */
    int original_number = n;
    int armstrong_number = 0;
    int digits = 0;
    int o = n;
    while (o > 0)
    {
        o = o / 10;
        digits += 1;
    }
    while (n > 0)
    {
        int temp = n % 10;
        n = n / 10;
        armstrong_number = armstrong_number + pow(temp, digits);// returns a double btw
    }
    if (armstrong_number == original_number)
    {
        return true;
    }
    else if (original_number == 0)
    {
        return true;
    }

    else
    {
        return false;
    }
}

// Notes:
// some of the armstrong numbers are :
/*
    0 , 1 ,371,1634*/
//

//=========================================================
// 5. Print Divisors
//=========================================================

void printDivisors(int n)
{
    // cout<<"The divisors of number "<<n<<" are: "<<endl;
    // for(int i = 1 ; i<=n ; i++){
    //     if(n%i == 0){
    //         cout<<i<<endl;
    //     }

    // }
    // better approach with reduced time complexity:
    vector<int> vec;
    cout << "The divisors of the number " << n << " are:" << endl;
    for (int i = 1; i*i <=n ; i++)
    {
        if (n % i == 0)
        {
            vec.push_back(i);
            if (i != n / i)
            {
                vec.push_back(n / i);
            }
            cout << endl;
        }
    }
    sort(vec.begin(), vec.end());
    for (auto it : vec)
    {
        cout << it << " ";
    }
}

// Notes:
//
//

//=========================================================
// 6. Prime Number
//=========================================================

bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    int count = 0;
    for (int i = 2; i*i <=n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if (n / i == i)
            {
                count++;
            }
        }
    }
    cout << "The total number of divisors of the number are :" << count + 2 << endl;
    if (count > 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

// Notes:
//
//

//=========================================================
// 7. GCD / HCF
//=========================================================

int gcd(int a, int b)
{
//     int temp = min(a, b);
//     int HCF = 1;
//     for (int i = 1; i <= temp; i++)
//     {
//         if (a % i == 0 && b % i == 0)
//         {
//             HCF = i;
//         }
//     }
//     return HCF;

//By Euclidean Algorithm :
    while(a!=0){
        int rem = b%a ; 
        b = a;
        a = rem;

    }
    return b ;
}

// Notes:
//
//

//=========================================================
// Driver Code
//=========================================================

int main()
{
    ios::sync_with_stdio(false); // for faster cin and cout operations
    cin.tie(nullptr);
    // int n;
    // cout << "Enter a number here:" << endl;
    // cin >> n;
    // // cout<<countDigits(n);
    // cout<<reverseNumber(n);
    // cout<<isPalindrome( n);
    // cout<<boolalpha; // Makes bool print as true/false
    // cout<<isArmstrong(n);
    // printDivisors(n);
    // cout<<boolalpha;
    //  cout<<isPrime(n);
    int a, b;
    cout << "Enter the values of number 1 and number 2 respectively" << endl;
    cin >> a;
    cin >> b;
    cout << gcd(a, b);
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

Interview Tips
==========================================================

-

==========================================================
*/
