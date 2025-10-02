#include <iostream>

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

    Node *Find(Node *node, int value) {
      if(!node || node ->data == value)
        return node;

      if (value< node->data)
        return Find(node->left, value);
      else
        return Find(node->right, value);
    }

    Node * findMin(Node*node){
        while(node->left)
          node = node->left;
        return node;
    }
    Node *getSuccessor(Node *node, int data)
    {
      // search the node O(h)
      Node *current = Find(node, data);
      if (!current)
        return node;

      if (!current->right && !current->left)
        cout << "Successor not found" << endl; // throw error here.
      // return node;

      // if it has a right subtree
      if(current->right){
        return findMin(current->right);
      } else { // no right subtree
        Node *successor{nullptr};
        Node *ancestor = node;

        while(ancestor != current){
          if(current->data < ancestor->data){
            successor = ancestor;
            ancestor = ancestor->left;
          }
          else
            ancestor = ancestor->right;
        }
        return successor;
      }
    };

    void inorder(Node* node){
      if(!node)
        return;

      inorder(node->left);
      cout << node->data << " ";
      inorder(node->right);
    };

  public:
    BST() : root(nullptr) {};

    void insert(int value){
      root = insert(root, value);
    }

   void getSuccessor(int value){
      Node *successor = getSuccessor(root, value);
      cout <<  successor->data<< endl;
    }

    void inorder() {
      inorder(root);

      cout << endl;
    };

    void findMin(){
      Node *min = findMin(root);
      cout << min->data << endl;
    }

    void Find(int value){
      Node *node = Find(root, value);
      cout << node<< endl;
    }
};

int main(){
  BST bst;

  bst.insert(10);
  bst.insert(12);
  bst.insert(14);
  bst.insert(17);
  bst.insert(16);
  bst.insert(25);

  bst.inorder();
  // bst.findMin();
  // bst.Find(14);
  bst.getSuccessor(25);
  return 0;
}