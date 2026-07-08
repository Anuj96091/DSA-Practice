/*
=================================================

Striver A2Z DSA Sheet

Topic:
Patterns

Language:
C++

Concepts:
- Nested Loops
- ASCII
- Pattern Observation
- Matrix Traversal

=================================================
*/

#include <bits/stdc++.h>
using namespace std;

// Pattern 1
/*
****
****
****
****
*/

void pattern1()
{
    int rows = 4;
    int columns = 4;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
// Pattern 2
/*
 *
 **
 ***
 ****
 *****
 */

void pattern2()
{
    int rows = 5;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 3
/*
1
12
123
1234
12345
*/
void pattern3()
{
    int rows = 5;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

// Pattern 4
/*
1
22
333
4444
55555
*/

void pattern4()
{
    int rows = 5;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

// Pattern 5
/*
*****
****
***
**
*
*/

void pattern5()
{
    int rows = 5;
    for (int i = rows; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 6
/*
12345
1234
123
12
1
*/

void pattern6()
{
    int rows = 5;
    for (int i = rows; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

// pattern 7
/*
 *
 ***
 *****
 *******
 *********
 */

void pattern7()
{
    int rows = 5;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 1; j < rows - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (2 * i) + 1; k++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
// Pattern 8
/*
*********
 *******
  *****
   ***
    *

*/

void pattern8()
{
    int rows = 5;

    for (int i = rows; i > 0; i--)
    {
        for (int j = 0; j < rows - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (2 * i) - 1; k++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

// Pattern 9
/*
 *
 ***
 *****
 *******
 *********
 *********
 *******
 *****
 ***
 *
 */
void pattern9()
{
    pattern7();
    pattern8();
}

// Pattern 10
/*
 *
 **
 ***
 ****
 *****
 ****
 ***
 **
 *
 */
void pattern10()
{
    int maxstars = 5; // Maximum number of stars in the middle row.
    int rows = maxstars * 2 - 1;
    for (int i = 0; i < rows; i++)
    {
        int star = i;
        if (i > maxstars - 1)
        {
            star = rows - star - 1;
        }
        for (int j = 0; j <= star; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 11
/*
1
01
101
0101
10101
*/
// void print11(int n) {

//     int start = 1;

//     for(int i = 0; i < n; i++) {

//         if(i % 2 == 0)
//             start = 1;
//         else
//             start = 0;

//         for(int j = 0; j <= i; j++) {

//             cout << start;
//             start = 1 - start;

//         }

//         cout << endl;
//     }
// }

void pattern11()
{
    int rows = 5;
    for (int i = 0; i < rows; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j <= i; j++)
            {
                if (j % 2 == 0)
                {
                    cout << "1 ";
                }
                else
                {
                    cout << "0 ";
                }
            }
        }
        else
        {
            for (int j = 0; j <= i; j++)
            {
                if (j % 2 == 0)
                {
                    cout << "0 ";
                }
                else
                {
                    cout << "1 ";
                }
            }
        }
        cout << endl;
    }
}

// Pattern 12
/*
1      1
12    21
123  321
12344321

*/

void pattern12()
{
    int rows = 4;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        for (int k = 1; k <= rows * 2 - 2 * (i + 1); k++)
        {
            cout << " ";
        }
        for (int j = i + 1; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

// Pattern 13
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

void pattern13()
{
    int rows = 5;
    int count = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

// Pattern14
/*
A
A B
A B C
A B C D
A B C D E
*/

void pattern14()
{
    int rows = 5;
    for (int i = 0; i < 5; i++)
    {
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Pattern 15
/*
A B C D E
A B C D
A B C
A B
A
*/

void pattern15()
{
    int rows = 5;
    for (int i = rows; i > 0; i--)
    {
        for (char j = 'A'; j <= 'A' + i - 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Pattern16
/*
A
B B
C C C
D D D D
E E E E E
*/

void pattern16()
{
    int rows = 5;
    int repetitions = 1;
    for (char i = 'A'; i < 'A' + rows; i++)
    {
        for (int j = 0; j < repetitions; j++)
        {
            cout << i << " ";
        }
        repetitions++;

        cout << endl;
    }
}

// better approach for pattern 16 :
/*
void pattern16(){

    int rows = 5;

    for(int i = 0; i < rows; i++){

        char ch = 'A' + i;

        for(int j = 0; j <= i; j++){

            cout << ch << " ";
        }

        cout << endl;
    }
}
*/

// Pattern 17
/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/

void pattern17()
{
    int rows = 5;
    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < rows - i - 1; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            int alphabetIndex = j;
            if (j > i)
            {
                alphabetIndex = 2 * i - j;
            }
            cout << char(alphabetIndex + 'A');
        }
        cout << endl;
    }
}

// Pattern 18
/*
E
D E
C D E
B C D E
A B C D E
*/

void pattern18()
{
    char letter;
    cout << "Enter the letter here:" << endl;
    cin >> letter;
    char a = letter;
    int j = 0; // will be treated as Letter number .
    for (char i = 'A'; i <= a; i++)
    {
        j++;
    }
    for (int k = 0; k < j; k++)
    {
        for (int l = 0; l <= k; l++)
        {
            cout << char(letter - k + l) << " ";
        }
        cout << endl;
    }
}

// ANOTHER APPREACH (here input is number)
/*
void pattern18(){

    int n = 5;

    for(int i = 0; i < n; i++){

        char ch = 'A' + n - i - 1;

        for(char j = ch; j <= 'A' + n - 1; j++){

            cout << j << " ";
        }

        cout << endl;
    }
}
*/

//  Pattern19
/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/

void pattern19()
{
    int rows = 10;
    int star;
    for (int i = 0; i < rows; i++)
    {
        star = i - 5;
        if (i <= rows / 2 - 1)
        {
            star = rows / 2 - i - 1;
        }
        for (int j = 0; j <= star; j++)
        {
            cout << "*";
        }
        star = i;
        if (i > rows / 2 - 1)
        {
            star = rows - i - 1;
        }
        for (int j = 0; j < star * 2; j++)
        {
            cout << " ";
        }
        star = i - 5;
        if (i <= rows / 2 - 1)
        {
            star = rows / 2 - i - 1;
        }
        for (int j = 0; j <= star; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

// Cleaner version :
/*
void pattern19(){

    int n = 5;

    int spaces = 0;

    for(int i=0; i<2*n; i++){

        int stars = i;

        if(i<n){
            stars = n-i;
        }
        else{
            stars = i-n+1;
        }


        for(int j=0; j<stars; j++){
            cout<<"*";
        }


        for(int j=0; j<spaces; j++){
            cout<<" ";
        }


        for(int j=0; j<stars; j++){
            cout<<"*";
        }


        cout<<endl;


        if(i<n-1)
            spaces += 2;
        else
            spaces -= 2;
    }
}
*/

// Pattern 20
/*
 *        *
 **      **
 ***    ***
 ****  ****
 **********
 ****  ****
 ***    ***
 **      **
 *        *
 */

void pattern20()
{
    int n = 5;
    int star;
    int space = 2 * n;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        star = i;
        if (i > n - 1)
        {
            star = 2 * n - i - 2;
        }
        for (int j = 0; j <= star; j++)
        {
            cout << "*";
        }
        if (i > n - 1)
        {
            space = space + 2;
        }
        else
        {
            space = space - 2;
        }
        for (int k = 0; k < space; k++)
        {
            cout << " ";
        }

        for (int j = 0; j <= star; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 21
/*
****
*  *
*  *
****
*/

void pattern21()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*";
            for (int k = 0; k < n - 2; k++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}

// Another Approach to solve Pattern 21
/*
void pattern21(){

    int n = 4;

    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){

            if(i==0 || j==0 || i==n-1 || j==n-1)
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<endl;
    }
}
*/

// Pattern 22
/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/

void pattern22()
{
    int n = 4;
    int rows = 2 * n - 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            int top = i;
            int left = j;
            int bottom = rows - 1 - i;
            int right = rows - 1 - j;
            int distance = min(min(top, bottom), min(left, right));
            cout << n - distance;
        }
        cout << endl;
    }
}

int main()
{

    int choice;
    cout << "Enter pattern number (1-22): ";

    cin >> choice;

    switch (choice)
    {

    case 1:
        pattern1();
        break;

    case 2:
        pattern2();
        break;

    case 3:
        pattern3();
        break;

    case 4:
        pattern4();
        break;

    case 5:
        pattern5();
        break;

    case 6:
        pattern6();
        break;

    case 7:
        pattern7();
        break;

    case 8:
        pattern8();
        break;

    case 9:
        pattern9();
        break;

    case 10:
        pattern10();
        break;

    case 11:
        pattern11();
        break;

    case 12:
        pattern12();
        break;

    case 13:
        pattern13();
        break;

    case 14:
        pattern14();
        break;

    case 15:
        pattern15();
        break;

    case 16:
        pattern16();
        break;

    case 17:
        pattern17();
        break;

    case 18:
        pattern18();
        break;

    case 19:
        pattern19();
        break;

    case 20:
        pattern20();
        break;

    case 21:
        pattern21();
        break;

    case 22:
        pattern22();
        break;

    default:
        cout << "Invalid pattern number" << endl;
    }

    return 0;
}
