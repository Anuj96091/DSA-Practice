 #include<bits/stdc++.h>
 using namespace std;
     struct node{
        int data;
        node* left = nullptr;
        node* right = nullptr; 
         node(int val) : data(val), left(nullptr), right(nullptr) {}
    };
    //-------------------------------- INORDER TRAVERSAL -------------------------------
    void inorder_traversal(node* root){
        node* ptr = root;
        if(ptr == nullptr){
            return;
        }
        inorder_traversal(ptr->left);
        cout<<ptr->data<<" ";
        inorder_traversal(ptr->right);
        
    }
     //-------------------------------- PREORDER TRAVERSAL -------------------------------
     void preorder_traversal(node* root){
        node* ptr = root;
        if(ptr == nullptr){
            return;
        }
        cout<<ptr->data<<" ";
        preorder_traversal(ptr->left);
        preorder_traversal(ptr->right);
        
    }
      //-------------------------------- POSTORDER TRAVERSAL -------------------------------
      void postorder_traversal(node* root){
        node* ptr = root;
        if(ptr == nullptr){
            return;
        }
        postorder_traversal(ptr->left);
        postorder_traversal(ptr->right);
        cout<<ptr->data<<" ";
    }


 int main() {
    node* root = new node(4);
    root->left = new node(2);
    root->right = new node(6);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right->left = new node(5);
    root->right->right = new node(7);
    cout<<"INORDER TRAVERSAL for the tree will be :\n";
    inorder_traversal(root);
    cout << endl;
    cout<<"PREORDER TRAVERSAL for the tree will be :\n";
    preorder_traversal(root);
    cout << endl;
    cout<<"POSTORDER TRAVERSAL for the tree will be :\n";
    postorder_traversal(root);
    cout << endl;
    return 0;
}