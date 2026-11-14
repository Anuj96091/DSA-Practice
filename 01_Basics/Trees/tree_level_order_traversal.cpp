#include<bits/stdc++.h>
using namespace std;
struct node{
    int value;
    node* left;
    node* right;
    node(int v) : value(v), left(nullptr), right(nullptr) {}

};
vector<vector<int>> level_order_traversal(node* root){
    queue<node*> q;
    vector<vector<int>> ans;
    if(root == nullptr) return ans;
    q.push(root);
    while(!q.empty()){
        vector<int> level;
        int size = q.size();
        for(int i = 0 ; i<size ; i++){
            
            node* temp = q.front();
            q.pop();
            if(temp->left!=nullptr) q.push(temp->left);
            if(temp->right!=nullptr) q.push(temp->right);
            level.push_back(temp->value);
        }
        ans.push_back(level);
    }
    return ans;

}
int main() {
    /*
            1
           / \
          2   3
         / \   \
        4   5   6
                 \
                  7
    */
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->right = new node(6);
    root->right->right->right = new node(7);
   
    cout << "Traversal:" << endl;
    vector<vector<int>> vec = level_order_traversal(root);
    for(int i = 0 ; i<vec.size() ; i++){
        for(int j = 0 ; j<vec[i].size() ; j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}