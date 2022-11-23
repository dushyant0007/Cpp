#include <iostream>
using namespace std;
#define COUNT 10

class TreeNode
{
public:
  int value;
  TreeNode *left;
  TreeNode *right;

  TreeNode(int value)
  {
    this->value = value;
    left = NULL;
    right = NULL;
  }
  TreeNode()
  {
    // this->value = NULL;
    left = NULL;
    right = NULL;
  }
};



class BST
{

public:
  TreeNode *root;

  bool isEmpty()
  {
    if (root->left == NULL && root->right == NULL)
    {
      return true;
    }
    else
      return false;
  }

  void insertNode(TreeNode *new_node)
  {
    if (root == NULL)
    {
      root = new_node;
      cout << "Value inserted as root node" << endl;
      return;
    }
    else
    {
      TreeNode *temp = root;
      while (temp != NULL)
      {
        if (new_node->value == temp->value)
        {
          cout << "Value already Exist" << endl;
          return;
        }
        else if (new_node->value < temp->value && temp->left == NULL)
        {
          temp->left = new_node;
          cout << "Value inserted" << endl;
          break;
        }
        else if (new_node->value < temp->value && temp->left != NULL)
        {
          temp = temp->left;
        }
        else if (new_node->value > temp->value && temp->right == NULL)
        {
          temp->right = new_node;
          cout << "Value inserted" << endl;
          break;
        }
        else if (new_node->value > temp->value && temp->right != NULL)
        {
          temp = temp->right;
        }
      }
    }
  }

  // NODE-LEFT-RIGHT
  void printPreOrder(TreeNode *r)
  {
    if (r == NULL)
    {
      return;
    }
    else
    {
      cout << r->value << " ";
      printPreOrder(r->left);
      printPreOrder(r->right);
    }
  }

  // LEFT-NODE-RIGHT
  void printInOrder(TreeNode *r)
  {
    if (r == NULL)
    {
      return;
    }
    else
    {
      printInOrder(r->left);
      cout << r->value << " ";
      printInOrder(r->right);
    }
  }

  // LEFT-RIGHT-NODE
  void printPostOrder(TreeNode *r)
  {
    if (r == NULL)
    {
      return;
    }
    else
    {
      printPostOrder(r->left);
      printPostOrder(r->right);
      cout << r->value << " ";
    }
  }

  void print2d(TreeNode *r, int space)
  {  
    if (r == NULL)
    {
      return;
    }
    else
    {
      space = space + 10;
      print2d(r->right, space);
      cout << endl;
      for (size_t i = 5; i < space; i++)
      {
        cout << " ";
      }
      cout << r->value << "\n";
      print2d(r->left, space);
    }
  }

  void searchOne(TreeNode *r, int value)
  {

    if (r == NULL)
    {
      cout << "Value NOT FOUND" << endl;
      return;
    }

    else if (r->value > value)
    {
      searchOne(r->left, value);
    }
    else if (r->value < value)
    {
      searchOne(r->right, value);
    }
    else
    {
      cout << "Value Found = " << r->value << endl;

      return;
    }
  }

  TreeNode *searchTwo(int value)
  {
    if (root == NULL)
    {
      cout << "Value NOT Found" << endl;
      return root;
    }
    else
    {
      TreeNode *temp = root;
      while (temp != NULL)
      {
        if (value == temp->value)
        {
          cout << "Value Found" << endl;
          cout<<temp<<" "<<temp->value<<endl;
          return temp;
        }
        else if (value < temp->value)
        {
          temp = temp->left;
        }
        else if (value > temp->value)
        {
          temp = temp->right;
        }
      }
    }
    cout << "Value NOT Found" << endl;
    return NULL;
  }

  int hightOfTree(TreeNode *r)
  {
    if (r == NULL)
    {
      return -1;
    }
    else
    {
      int lHight = hightOfTree(r->left);
      int rHight = hightOfTree(r->right);
      if (lHight > rHight)
        return (lHight + 1);
      else
        return (rHight + 1);
    }
  }

  // BreadthFirstSearch
  void printLevelOrder(TreeNode *r)
  {
    int h = hightOfTree(r);
    for (int i = 0; i <= h; i++)
    {
      printGivenLevel(r, i);
    }
  }
  void printGivenLevel(TreeNode *r, int level)
  {
    if (r == NULL)
    {
      return;
    }
    else if (level == 0)
      cout << r->value << endl;
    else
    {
      printGivenLevel(r->left, level - 1);
      printGivenLevel(r->right, level - 1);
    }
  }
 

  // Delete Node
  TreeNode *minValueNode(TreeNode *node)
  {
    TreeNode *current = node;
    while (current->left != NULL)
    {
      current = current->left;
    }
    return current;
  }

  TreeNode *deleteNode(TreeNode *r, int v)
  {
    if (r == NULL)
    {
      return r;
    }
    else if (v < r->value)
      r->left = deleteNode(r->left, v);
    else if (v > r->value)
      r->right = deleteNode(r->right, v);
    else
    {
      if (r->left == NULL)
      {
        TreeNode *temp = r->right;
        delete r;
        return temp;
      }
     else if (r->right == NULL)
      {
        TreeNode *temp = r->left;
        delete r;
        return temp;
      }
      else
      {
        TreeNode *temp = minValueNode(r->right);
        r->value = temp->value;
        r->right = deleteNode(r->right, temp->value);
      }
      return r;
    }
    return NULL;
  }
};





int main()
{
  BST *obj = new BST;

  int option, val;
  TreeNode* aa = new TreeNode(30);
  TreeNode* ab = new TreeNode(45);
  TreeNode* ac = new TreeNode(18);
  TreeNode* ad = new TreeNode(10);
  TreeNode* ae = new TreeNode(25);
  TreeNode* af = new TreeNode(65);
  TreeNode* ag = new TreeNode(35);
  TreeNode* ah = new TreeNode(33);
  TreeNode* ai = new TreeNode(38);
  TreeNode* aj = new TreeNode(69);
  TreeNode* ak = new TreeNode(55);
  TreeNode* al = new TreeNode(8);
  TreeNode* am = new TreeNode(12);
  TreeNode* an = new TreeNode(20);
  TreeNode* ao = new TreeNode(26);
  obj->insertNode(aa);
  obj->insertNode(ab);
  obj->insertNode(ac);
  obj->insertNode(ad);
  obj->insertNode(ae);
  obj->insertNode(af);
  obj->insertNode(ag);
  obj->insertNode(ah);
  obj->insertNode(ai);
  obj->insertNode(aj);
  obj->insertNode(ak);
  obj->insertNode(al);
  obj->insertNode(am);
  obj->insertNode(an);
  obj->insertNode(ao);

  obj->printPreOrder(aa);
 
  cout<<endl;
  cout<<obj->root->right->value<<" <-- The value "<<endl;

  obj->print2d(obj->root,0);

  cout<<endl;
obj->deleteNode(obj->root,69);
  cout<<"BFS -> ";


  // print2DUtil(obj->root,5);
 
  // { cout << "What operations do you want to perform ?" << endl;
  //   cout << "Select Option Number : Enter 0 to Exit" << endl;
  //   cout << "1. Insert Node" << endl;
  //   cout << "2. Search Node" << endl;
  //   cout << "3. Delete Node" << endl;
  //   cout << "4. Print BST" << endl;
  //   cout << "5. Print 2d" << endl;
  //   cout << "6. Breadth First Search Printing" << endl;
  //   cout << "7. Hight Of Tree " << endl;
  // }


  // do
  // {
  //   cout << "Enter option" << endl;
  //   cin >> option;

  //   TreeNode *new_node = new TreeNode();

  //   switch (option)
  //   {
  //   case 0:
  //     break;

  //   case 1:
  //     cout << "Insert" << endl;
  //     cout << "Enter the value of tree node to insert in bst" << endl;
  //     cin >> val;
  //     new_node->value = val;
  //     obj->insertNode(new_node);
  //     break;

  //   case 2:
  //     cout << "Enter search item" << endl;
  //     cin >> val;
  //     obj->searchOne(obj->root, val);
  //     cout << "--Search Two--" << endl;
  //     cout << obj->searchTwo(val)->value << endl;

  //     break;

  //   case 3:
  //     cout << "Enter The Item To Delete" << endl;
  //     cin >> val;
  //     obj->deleteNode(obj->root, val);

  //     break;

  //   case 4:
  //     obj->printPreOrder(obj->root);
  //     cout << endl;
  //     cout << "PreOrder" << endl;
  //     cout << "InOrder" << endl;
  //     obj->printInOrder(obj->root);
  //     cout << endl;
  //     cout << "PostOrder" << endl;
  //     obj->printPostOrder(obj->root);
  //     cout << endl;

  //     break;

  //   case 5:
  //     obj->print2d(obj->root, 5);
  //     break;

  //   case 6:
  //     obj->printLevelOrder(obj->root);
  //     break;

  //   case 7:
  //     obj->hightOfTree(obj->root);
  //     break;

  //   default:
  //     break;
  //   }
 
  // if(new_node->value == NULL){
  //   delete new_node;
  //        }

  // } while (option != 0);

}
