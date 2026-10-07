#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};
static int index = -1;
Node* buildTree(vector<int>&preorder){
    index++;
    if(preorder[index] == - 1) {
        return NULL;
    }
    Node* root = new Node(preorder[index]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
}
int main(){
    vector<int>preorder = {1,2,4,-1,-1,5,-1,-1,3,6,-1,-1,7,-1,-1};
    Node* root = buildTree(preorder);
    cout<<root->data<<endl;
    return 0;
}