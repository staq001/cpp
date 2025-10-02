// Notes.
                 // Array    Linked-List  Array(sorted)   BST(balanced)
// Search(x)        O(n)        O(n)        O(Logn)         O(Logn)

// Insert(x)        O(1)        O(1)        O(n)             O(Logn)

// remove(x)        O(n)        O(n)        O(n)             O(Logn)

// time complexity for these operations in different data Structures.

// BST - is a binary tree in which for each node, value of all the nodes in left subtree is lesser or equal (to parent) and value of all nodes in right subtree is greater.

#include <iostream>
#include <queue>
#include <climits>

using namespace std;

struct Node {
  int data;
  Node *left;
  Node *right;

  Node(int value) : data(value), left(nullptr), right(nullptr) {};
};

class BST{

  private:
    Node *root;

    Node* insert(Node* node, int value) {
      if(node == nullptr){
        return new Node(value);
      }

      if (value<= node->data){
        node->left = insert(node->left, value);
      }else if(value>node->data){
        node->right = insert(node->right, value);
      }
      return node;
    } 

        bool search(Node* node, int value){
      if(node==nullptr)
        return false;

      if(value == node->data)
        return true;

      if(value< node-> data)
        return search(node->left, value);
      else
        return search(node->right, value);
    }


    Node * findMin(Node *node){
      while (node->left!=nullptr){
        node = node->left;
      }
      return node;
    }

    Node* remove(Node* node, int value){
      if (node==nullptr)
        return node;

      if(value<node-> data){
        node->left = remove(node->left, value);
      }else if(value> node->data){
        node->right = remove(node->right, value);
      }
      else {

        if (node -> left == nullptr && node->right == nullptr){
          delete node;
          return nullptr;
        }else if(node->left==nullptr){
          Node *temp = node->right;
          
          delete node;
          return temp;
        }else if(node->right==nullptr){
          Node *temp = node->left;
          
          delete node;
          return temp;
        }else {
          Node *temp = findMin(node->right);
          node->data = temp->data;

          node->right = remove(node->right, temp->data);
        }
      }
      return node;
    };

    bool isSubTreeLesser(Node* node, int value) {
      if (!node )
        return true;

      if(node->data < value && isSubTreeLesser(node->right, value) &&isSubTreeLesser(node->left, value)){
        return true;
      }
      return false;
    };

    bool isSubTreeGreater(Node *node, int value){
     if (!node)
       return true;

      if(node->data > value && isSubTreeGreater(node->right, value) &&isSubTreeGreater(node->left, value)){
        return true;
      }
      return false;
    }

    bool isBST(Node * node){
      if(!node )
        return true; 

      if(isSubTreeLesser(node->left, node->data) && isSubTreeGreater(node->right, node->data) && isBST(node->left) && isBST(node->right)){
        return true;
      }                  //T O(n^2)
      return false;
    }

    bool isBST2(Node * node, int minVal, int maxVal){
      if (!node)
        return true;

      if(node->data <=minVal || node->data >=maxVal)
        return false;
                                //T,S O(n) & O(h)
      return isBST2(node->left, minVal, node->data) && isBST2(node->right, node->data, maxVal);
    }

    int findHeight (Node* node){
      // height of a tree mathematically =
      // height = max(height of left, height of right) + 1;  = O(n)
      if (!node)
        return -1;

     int leftHeight = findHeight(node->left);
     int rightHeight = findHeight(node->right);

     return max(leftHeight, rightHeight) + 1;
     //  return max( findHeight(node->left), findHeight(node->right)) + 1;
    } 

    
    // Tree traversal refers to visting every node in the tree exactly once in a particular order. categorized into two, breadth-first and depth-first.

    // depth-first.
    void inorder(Node* node){
      if(node==nullptr){
        return;
      }

      inorder(node -> left);
      cout << node->data << " ";
      inorder(node->right);
    }
      
    void postorder(Node* node){
      if(!node) {
        return;
      }

      postorder(node->left);
      postorder(node->right);
      cout << node->data << " ";
    }

    void preorder(Node* node){
      if (!node)
        return;

      cout << node->data << " ";
      preorder(node->left);
      preorder(node->right);
    }

    // breadth-first.
    void levelorder(Node * node){
      if (!node){
        return;             // TC ->O(n), SC ->b(1), w(n)
      }

      queue<Node *> Q;
      Q.push(root);

      while(!Q.empty()){
        Node *current = Q.front();
        cout << current->data << " ";

        if (current->left != NULL)
          Q.push(current->left);
        if(current->right!=NULL)
          Q.push(current->right);
        Q.pop();
      }

    }

  public:
    BST() : root(nullptr) {};


    void insert(int value){
      root = insert(root, value);
    }


    void inorder(){
      inorder(root);
      cout << endl;
    }

    void postorder(){
      postorder(root);
      cout << endl;
    }

    void preorder(){
      preorder(root);
      cout << endl;
    }

    void levelorder(){
      levelorder(root);
      cout << endl;
    }

    
    bool search(int value){
      return search(root, value);
    }

    void remove(int value){
      root = remove(root, value);
    }

    void findHeight(){
      int treeHeight = findHeight(root);
      cout << treeHeight << endl;
    }

    bool isBST(){
      return isBST(root);
    }

    bool isBST2(){
      return isBST2(root, INT_MIN, INT_MAX);
    }
};

int main(){

  BST bst;

  cout << boolalpha;

  bst.insert(20);
  bst.insert(25);
  bst.insert(21);
  bst.insert(19);
  bst.insert(10);
  bst.inorder();
  // bst.remove(20);
  cout << bst.search(21)<< endl;
  cout << bst.search(20)<< endl;
  // bst.remove(21);
  bst.inorder();
  // bst.findHeight();

  bst.preorder();
  bst.postorder();
  bst.levelorder();
  cout << bst.isBST() << endl;
  cout << bst.isBST2() << endl;
  cout << INT_MIN << endl;
  cout << INT_MAX << endl;


  // we can also perform isBST() with inorder traversal, if elements are in sorted order, tree is a BST 
  return 0;
  cout << endl;
}