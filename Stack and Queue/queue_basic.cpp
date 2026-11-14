// /*
// ===========================================================
//                     QUEUE IN C++
// ===========================================================

// 1. WHAT IS A QUEUE?
// -----------------------------------------------------------

// A Queue is a linear data structure that follows:

//         FIFO = First In, First Out

// The element inserted FIRST is removed FIRST.

// Think of a line of people:

//         FRONT                         REAR
//           ↓                             ↓
//         | 10 | | 20 | | 30 | | 40 |
//           ↑                             ↑
//        removed                       inserted

// 10 entered first, so 10 will leave first.


// ===========================================================
// 2. BASIC QUEUE OPERATIONS
// ===========================================================

// push / enqueue(x)
//     -> Inserts x at the REAR of the queue

// pop / dequeue()
//     -> Removes the element from the FRONT

// front()
//     -> Returns the element at the FRONT

// back()
//     -> Returns the element at the REAR

// empty()
//     -> Checks whether queue is empty

// size()
//     -> Returns number of elements


// All these operations are O(1) in std::queue.


// ===========================================================
// 3. USING QUEUE STL
// ===========================================================
// */

// #include <iostream>
// #include <queue>
// using namespace std;

// int main()
// {
//     queue<int> q;


//     // ------------------------------------------------------
//     // PUSH
//     // ------------------------------------------------------

//     q.push(10);
//     q.push(20);
//     q.push(30);

//     /*
//         Queue:

//         FRONT                         REAR
//           ↓                             ↓
//         | 10 | | 20 | | 30 |
//     */


//     // ------------------------------------------------------
//     // FRONT
//     // ------------------------------------------------------

//     cout << q.front() << endl;

//     // Output:
//     // 10


//     // ------------------------------------------------------
//     // BACK
//     // ------------------------------------------------------

//     cout << q.back() << endl;

//     // Output:
//     // 30


//     // ------------------------------------------------------
//     // POP
//     // ------------------------------------------------------

//     q.pop();

//     /*
//         10 is removed.

//         Queue:

//         FRONT              REAR
//           ↓                  ↓
//         | 20 | | 30 |
//     */


//     // ------------------------------------------------------
//     // EMPTY
//     // ------------------------------------------------------

//     if (q.empty())
//     {
//         cout << "Queue is empty" << endl;
//     }
//     else
//     {
//         cout << "Queue is not empty" << endl;
//     }


//     // ------------------------------------------------------
//     // SIZE
//     // ------------------------------------------------------

//     cout << q.size() << endl;


//     return 0;
// }


// /*
// ===========================================================
// 4. QUEUE OPERATIONS SUMMARY
// ===========================================================

//         queue<int> q;

//         q.push(x);       // Insert x at REAR

//         q.pop();         // Remove element from FRONT

//         q.front();       // Access FRONT element

//         q.back();        // Access REAR element

//         q.empty();       // Check if queue is empty

//         q.size();        // Number of elements


// ===========================================================
// 5. VERY IMPORTANT DIFFERENCE BETWEEN STACK AND QUEUE
// ===========================================================

// STACK:

//         LIFO
//         Last In -> First Out

//         | 30 | <- TOP
//         | 20 |
//         | 10 |

//         30 comes out first.


// QUEUE:

//         FIFO
//         First In -> First Out

//         FRONT                    REAR
//           ↓                        ↓
//         | 10 | | 20 | | 30 |
//           ↑
//         comes out first

//         10 comes out first.


// ===========================================================
// 6. QUEUE OVERFLOW
// ===========================================================

// Overflow occurs when we try to insert an element into a
// FULL fixed-size queue.

// Example:

//         | 10 | | 20 | | 30 |
//           ↑                  ↑
//         FRONT              REAR

// If the queue has maximum capacity 3:

//         q.push(40);

// causes Queue Overflow.

// NOTE:

// std::queue normally uses a dynamically sized underlying
// container, so fixed-capacity overflow is mainly relevant
// when implementing a queue yourself.


// ===========================================================
// 7. QUEUE UNDERFLOW
// ===========================================================

// Underflow occurs when we try to remove an element from
// an EMPTY queue.

// Example:

//         queue<int> q;

//         q.pop();       // Underflow

// Therefore, preferably check:

//         if (!q.empty())
//         {
//             q.pop();
//         }

// Also avoid:

//         q.front();
//         q.back();

// when the queue is empty.


// ===========================================================
// 8. IMPLEMENTING QUEUE USING ARRAY
// ===========================================================
// */

// class Queue
// {
// private:

//     int arr[100];

//     int front;
//     int rear;


// public:

//     // Constructor
//     Queue()
//     {
//         front = 0;
//         rear = -1;
//     }


//     // ------------------------------------------------------
//     // PUSH / ENQUEUE
//     // ------------------------------------------------------

//     void push(int x)
//     {
//         if (rear == 99)
//         {
//             cout << "Queue Overflow" << endl;
//             return;
//         }

//         rear++;

//         arr[rear] = x;
//     }


//     // ------------------------------------------------------
//     // POP / DEQUEUE
//     // ------------------------------------------------------

//     void pop()
//     {
//         if (front > rear)
//         {
//             cout << "Queue Underflow" << endl;
//             return;
//         }

//         front++;
//     }


//     // ------------------------------------------------------
//     // FRONT
//     // ------------------------------------------------------

//     int getFront()
//     {
//         if (front > rear)
//         {
//             cout << "Queue is empty" << endl;
//             return -1;
//         }

//         return arr[front];
//     }


//     // ------------------------------------------------------
//     // REAR / BACK
//     // ------------------------------------------------------

//     int getRear()
//     {
//         if (front > rear)
//         {
//             cout << "Queue is empty" << endl;
//             return -1;
//         }

//         return arr[rear];
//     }


//     // ------------------------------------------------------
//     // EMPTY
//     // ------------------------------------------------------

//     bool empty()
//     {
//         return front > rear;
//     }
// };


// /*
// ===========================================================
// 9. UNDERSTANDING FRONT AND REAR
// ===========================================================

// Initially:

//         front = 0
//         rear  = -1

//         Queue is empty.


// After push(10):

//         index:   0
//                  |
//         array:  [10]
//                  ↑
//                front
//                  ↑
//                rear


// After push(20):

//         index:   0    1
//                  |    |
//         array:  [10] [20]
//                  ↑         ↑
//                front     rear


// After push(30):

//         index:   0    1    2
//                  |    |    |
//         array:  [10] [20] [30]
//                  ↑              ↑
//                front          rear


// After pop():

//         10 is logically removed.

//         index:   0    1    2
//                  |    |    |
//         array:  [10] [20] [30]
//                        ↑         ↑
//                      front     rear


// The important thing:

//         front moves forward.

//         rear moves forward when we insert.


// ===========================================================
// 10. PROBLEM WITH SIMPLE ARRAY QUEUE
// ===========================================================

// Consider:

//         [10] [20] [30] [40] [50]
//          ↑                   ↑
//        front               rear

// After removing 10, 20 and 30:

//         [10] [20] [30] [40] [50]
//                         ↑      ↑
//                       front   rear


// The first three positions are technically unused.

// But if rear reaches the end of the array, we may say
// the queue is full even though there is unused space
// at the beginning.

// This is called:

//         WASTAGE OF SPACE


// This problem is solved using a:

//         CIRCULAR QUEUE


// ===========================================================
// 11. CIRCULAR QUEUE
// ===========================================================

// In a Circular Queue, the last position is connected
// back to the first position.

// Conceptually:

//              ┌───────────────────────┐
//              ↓                       |
//         [0] [1] [2] [3] [4]          |
//          ↑                       ↑   |
//          └───────────────────────┘

// When rear reaches the last position, it can move back
// to position 0 if space is available.

// The common formula is:

//         rear = (rear + 1) % size;


// Similarly:

//         front = (front + 1) % size;


// ===========================================================
// 12. QUEUE USING STL - COMPLETE EXAMPLE
// ===========================================================
// */

// #include <iostream>
// #include <queue>
// using namespace std;

// int main()
// {
//     queue<int> q;

//     // Insert elements
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);

//     /*
//         Queue:

//         FRONT                         REAR
//           ↓                             ↓
//         | 10 | | 20 | | 30 | | 40 |
//     */


//     // Access front
//     cout << "Front: " << q.front() << endl;


//     // Access rear
//     cout << "Rear: " << q.back() << endl;


//     // Remove front element
//     q.pop();


//     /*
//         Queue now:

//         FRONT                  REAR
//           ↓                      ↓
//         | 20 | | 30 | | 40 |
//     */


//     // Print all elements

//     while (!q.empty())
//     {
//         cout << q.front() << " ";

//         q.pop();
//     }

//     return 0;
// }


// /*
// ===========================================================
// 13. IMPORTANT APPLICATIONS OF QUEUE
// ===========================================================

// 1. CPU Scheduling

// 2. Printer Queue

// 3. Network/Data Buffers

// 4. Breadth First Search (BFS)

// 5. Handling requests in servers

// 6. Keyboard/Input buffers

// 7. Task scheduling

// 8. Level Order Traversal of Binary Tree


// ===========================================================
// 14. QUEUE IN BFS
// ===========================================================

// BFS = Breadth First Search

// BFS uses a Queue.

// Example:

//                 1
//               /   \
//              2     3
//             / \     \
//            4   5     6


// BFS traversal:

//         1 -> 2 -> 3 -> 4 -> 5 -> 6


// Why Queue?

// We process nodes in the same order in which they
// were discovered.

// Basic idea:

//         push(start)

//         while queue is not empty:

//             node = front()
//             pop()

//             process node

//             push its unvisited neighbours


// ===========================================================
// 15. QUEUE vs STACK
// ===========================================================

//         STACK                       QUEUE

//         LIFO                        FIFO

//         Last In                      First In
//           ↓                            ↓
//         First Out                    First Out


//         Insert at TOP               Insert at REAR

//         Remove from TOP             Remove from FRONT


//         push()                      push()

//         pop()                       pop()

//         top()                       front()
//                                     back()


//         Example:                    Example:

//         | 30 | ← top               front       rear
//         | 20 |                       ↓           ↓
//         | 10 |                     |10| |20| |30|


// ===========================================================
// 16. TIME COMPLEXITY
// ===========================================================

//         Operation              Time

//         push()                 O(1)

//         pop()                  O(1)

//         front()                O(1)

//         back()                 O(1)

//         empty()                O(1)

//         size()                 O(1)


// ===========================================================
// 17. QUICK REVISION
// ===========================================================

// QUEUE
//   |
//   ↓
// FIFO
//   |
//   ↓
// First In -> First Out


// STL:

//         #include <queue>

//         queue<int> q;


// Operations:

//         q.push(x);       // Insert at REAR

//         q.pop();         // Remove from FRONT

//         q.front();       // Access FRONT

//         q.back();        // Access REAR

//         q.empty();       // Check empty

//         q.size();        // Get size


// MOST IMPORTANT:

//         q.pop();

// does NOT return the removed element.

// Use:

//         int x = q.front();
//         q.pop();


// ===========================================================
// 18. COMMON QUEUE PROBLEMS
// ===========================================================

// BEGINNER:

// 1. Implement Queue using Array
// 2. Implement Queue using Linked List
// 3. Implement Circular Queue
// 4. Reverse a Queue
// 5. Generate Binary Numbers using Queue


// INTERMEDIATE:

// 6. First Non-Repeating Character
// 7. Sliding Window Maximum
// 8. Rotten Oranges
// 9. BFS Traversal
// 10. Level Order Traversal


// ADVANCED:

// 11. LRU Cache
// 12. Implement Stack using Queues
// 13. Implement Queue using Stacks
// 14. Shortest Path using BFS


// ===========================================================
// */
#include<bits/stdc++.h>
using namespace std;
class qimpl{
    int start;
    int end;
    int size =4;
    int q[4];
    int current_size=0;
    
public:
    qimpl(){
        start = -1;
        end = -1;   
    }
    void push(int x){
        if(current_size == size ){
            cout<<"queue over flow , you can't push any more element\n";
            return ;
        }
        if(current_size == 0) {
            start = 0 ; 
            end = 0;
        }
        else{
            end = (end+1)%size;
        }
        q[end]= x;
        current_size++;
        }
    void pop(){
        if(current_size  == 0){
            cout<<"Queue under flow\n";
            return;
        }
        if(current_size == 1){
            start =-1;
            end = -1;
            current_size--;    
        }
        else{
            start = (start+1)%size;
            current_size--;
        }

    }
    void top(){
        if(current_size == 0){
            cout<<"No elements present in the queue\n";
        }
        else{
        cout<<q[start];
        }
    
    }
    void size_q(){
        cout<<"Current size \n"<<current_size<<'\n';
    }

    };

int main(){
    qimpl q;
    q.push(3);
    q.pop();
    q.push(5);
    q.push(8);
    q.push(8);
    q.push(0);
    q.size_q();


    return 0;
}