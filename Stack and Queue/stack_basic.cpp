// /*
// ===========================================================
//                     STACK IN C++
// ===========================================================

// 1. WHAT IS A STACK?
// -----------------------------------------------------------
// A Stack is a linear data structure that follows:

//         LIFO = Last In, First Out

// The element inserted LAST is removed FIRST.

// Example:

//         | 30 |  <- TOP
//         | 20 |
//         | 10 |

// If we pop(), 30 will be removed first.


// ===========================================================
// 2. BASIC STACK OPERATIONS
// ===========================================================

// push(x)   -> Inserts x at the top
// pop()     -> Removes the top element
// top()     -> Returns the top element
// empty()   -> Checks whether stack is empty
// size()    -> Returns number of elements

// All of these operations take O(1) time.


// ===========================================================
// 3. USING STACK STL
// ===========================================================
// */

// #include <iostream>
// #include <stack>
// using namespace std;

// int main()
// {
//     stack<int> st;

//     // ------------------------------------------------------
//     // PUSH
//     // ------------------------------------------------------

//     st.push(10);
//     st.push(20);
//     st.push(30);

//     /*
//         Stack:

//         | 30 | <- TOP
//         | 20 |
//         | 10 |
//     */


//     // ------------------------------------------------------
//     // TOP
//     // ------------------------------------------------------

//     cout << st.top() << endl;

//     // Output:
//     // 30


//     // ------------------------------------------------------
//     // POP
//     // ------------------------------------------------------

//     st.pop();

//     /*
//         Stack:

//         | 20 | <- TOP
//         | 10 |
//     */

//     /*
//         IMPORTANT:

//         pop() DOES NOT return the removed element.

//         WRONG:
//             int x = st.pop();    // ERROR

//         CORRECT:
//             int x = st.top();
//             st.pop();
//     */


//     // ------------------------------------------------------
//     // EMPTY
//     // ------------------------------------------------------

//     if (st.empty())
//     {
//         cout << "Stack is empty" << endl;
//     }
//     else
//     {
//         cout << "Stack is not empty" << endl;
//     }


//     // ------------------------------------------------------
//     // SIZE
//     // ------------------------------------------------------

//     cout << st.size() << endl;


//     return 0;
// }


// /*
// ===========================================================
// 4. STACK OPERATIONS SUMMARY
// ===========================================================

//     stack<int> st;

//     st.push(x);       // Insert x
//     st.pop();         // Remove top element
//     st.top();         // Access top element
//     st.empty();       // Check if empty
//     st.size();        // Number of elements


// ===========================================================
// 5. STACK OVERFLOW
// ===========================================================

// Overflow occurs when we try to insert an element into a
// FULL stack.

// Example for a fixed-size stack:

//         | 30 |
//         | 20 |
//         | 10 | <- FULL

// Trying to push(40) causes Stack Overflow.


// ===========================================================
// 6. STACK UNDERFLOW
// ===========================================================

// Underflow occurs when we try to remove an element from
// an EMPTY stack.

// Example:

//         stack<int> st;

//         st.pop();     // Underflow

// Therefore, preferably check:

//         if (!st.empty())
//         {
//             st.pop();
//         }


// ===========================================================
// 7. IMPLEMENTING STACK USING ARRAY
// ===========================================================
// */

// class Stack
// {
// private:

//     int arr[100];

//     // top stores the index of the top element
//     int top;


// public:

//     // Constructor
//     Stack()
//     {
//         // -1 means stack is initially empty
//         top = -1;
//     }


//     // ------------------------------------------------------
//     // PUSH
//     // ------------------------------------------------------

//     void push(int x)
//     {
//         // Stack is full
//         if (top == 99)
//         {
//             cout << "Stack Overflow" << endl;
//             return;
//         }

//         // Increase top and insert element
//         arr[++top] = x;
//     }


//     // ------------------------------------------------------
//     // POP
//     // ------------------------------------------------------

//     void pop()
//     {
//         // Stack is empty
//         if (top == -1)
//         {
//             cout << "Stack Underflow" << endl;
//             return;
//         }

//         // Simply move top one position backwards
//         top--;
//     }


//     // ------------------------------------------------------
//     // PEEK / TOP
//     // ------------------------------------------------------

//     int peek()
//     {
//         if (top == -1)
//         {
//             cout << "Stack is empty" << endl;
//             return -1;
//         }

//         return arr[top];
//     }


//     // ------------------------------------------------------
//     // EMPTY
//     // ------------------------------------------------------

//     bool empty()
//     {
//         return top == -1;
//     }
// };


/*
===========================================================
8. UNDERSTANDING 'top' IN ARRAY IMPLEMENTATION
===========================================================

Initially:

        top = -1

        Stack is empty


After push(10):

        index:   0
                 |
        array:  [10]
                 ^
                top = 0


After push(20):

        index:   0    1
                 |    |
        array:  [10] [20]
                       ^
                      top = 1


After push(30):

        index:   0    1    2
                 |    |    |
        array:  [10] [20] [30]
                            ^
                           top = 2


After pop():

        index:   0    1    2
                 |    |    |
        array:  [10] [20] [30]
                       ^
                      top = 1

The value 30 is logically removed.

===========================================================
9. STACK USING VECTOR
===========================================================

A vector can also behave like a stack.

        vector<int> st;

        st.push_back(10);   // push
        st.push_back(20);
        st.push_back(30);

        st.back();          // top

        st.pop_back();      // pop

Mapping:

        Stack              Vector

        push()      ->     push_back()
        pop()       ->     pop_back()
        top()       ->     back()

===========================================================
10. APPLICATIONS OF STACK
===========================================================

1. Function calls / Recursion
2. Undo and Redo
3. Parentheses matching
4. Expression evaluation
5. Infix -> Postfix conversion
6. Infix -> Prefix conversion
7. DFS (Depth First Search)
8. Backtracking
9. Browser history


===========================================================
11. IMPORTANT STACK PROBLEMS
===========================================================

BEGINNER:

1. Implement Stack using Array
2. Implement Stack using Linked List
3. Reverse a String using Stack
4. Balanced Parentheses
5. Insert element at bottom of Stack


INTERMEDIATE:

6. Reverse a Stack
7. Sort a Stack
8. Next Greater Element
9. Next Smaller Element
10. Stock Span Problem
11. Min Stack


ADVANCED:

12. Largest Rectangle in Histogram
13. Trapping Rain Water
14. Celebrity Problem


===========================================================
12. TIME COMPLEXITY
===========================================================

        Operation       Time Complexity

        push()              O(1)
        pop()               O(1)
        top()               O(1)
        empty()             O(1)
        size()              O(1)


===========================================================
13. QUICK REVISION
===========================================================

STACK
  |
  ↓
LIFO
  |
  ↓
Last In -> First Out


STL:

        #include <stack>

        stack<int> st;


Operations:

        st.push(x);       // Insert
        st.pop();         // Remove top
        st.top();         // Access top
        st.empty();       // Check empty
        st.size();        // Get size


MOST IMPORTANT:

        st.pop();

does NOT return the removed element.

Use:

        int x = st.top();
        st.pop();


===========================================================
*/

//Stack using array:
#include<bits/stdc++.h>
using namespace std;
#include <iostream>
using namespace std;

class Stack {
    int st[10];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top == 9) {
            cout << "Stack Overflow\n";
            return;
        }

        top++;
        st[top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }

        top--;
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1;
        }

        return st[top];
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    cout << "Top element after pop: " << s.peek() << endl;

    return 0;
}