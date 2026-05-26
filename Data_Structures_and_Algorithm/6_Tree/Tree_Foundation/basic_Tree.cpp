/*

1. What is a Tree?

A tree is a hierarchical data structure.

Terminology
Root
Parent
Child
Leaf Node
Height
Depth
Subtree
Siblings

        1
      /   \
     2     3
    / \
   4   5

Root = 1
Parent of 4 = 2
Leaf = 4, 5, 3
Height = longest path from root to leaf

*/

//Tree Node DataStructure

class Tree{
    
private:

    int data;
    Tree* left;
    Tree* right;

public:

    Tree( int val ){
        data = val;
        left = nullptr;
        right = nullptr;
    }  
    
    
    //cleaner

    Tree(int val) : data(val) , left(nullptr) , right(nullptr) {} 

};