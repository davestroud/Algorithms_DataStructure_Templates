#include <iostream>
using namespace std;

struct BstNode {
  int data;
  Node* left;
  Node* right;
};

BstNode* GetNewNode(int data) {
  BstNode* newNode = new BstNode();
  newNode->data = data;
  newNode->left = newNode->right = NULL;
  return newNode;
}

BstNode* Insert(BstNode* root, int data); {
  if(root == NULL) {  // empty tree
    root = GetNewNode(data);
  }
  else if(data <= root->data) {
    root-> left = Insert(root->left, data);
  }
  else {
    root->right = Insert(root->right, data);
  }
  return root;
}

bool Search(BstNode* root, int data) {
  if (root == NULL) return false;
  else if (root->data == data) return true;
  else if (data <= root->data) return Search(root->left, data);
  else return Search(root->right, data);
}


int main(int argc, char const *argv[]) {
  BstNode* root = NULL;   // Creating an empty tree
  root = Insert(root, 15);
  root = Insert(root, 10);
  root = Insert(root, 20);
  root = Insert(root, 25);
  root = Insert(root, 8);
  root = Insert(root, 12);
  int number;
  cout << "Enter number to be searched\n";
  cin >> number;
  if(search(root, number) == true) << cout "Found\n";
  else cout << "Not found\n";

  return 0;
}
