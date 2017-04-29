#ifndef BinaryTree_hpp
#define BinaryTree_hpp

#include <iostream>
#include "BinaryNod.hpp"

class BinaryTree{
    BinaryNod* root;
    
public:
    BinaryTree(BinaryNod* root) : root(root) {  }
    BinaryNod* getRoot() { return root; }
    ~BinaryTree() {}
};

#endif /* BinaryTree_hpp */
