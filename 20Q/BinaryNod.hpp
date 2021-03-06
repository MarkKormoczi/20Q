#ifndef BinaryNod_hpp
#define BinaryNod_hpp

#include <iostream>
#include <string>

class BinaryNod{
    std::string item;
    BinaryNod* left;
    BinaryNod* right;
    
public:
    BinaryNod(std::string item) : item(item), left(nullptr), right(nullptr) {  }
    BinaryNod* getLeft() { return left; }
    BinaryNod* getRight() { return right; }
    std::string getItem() { return item; }
    void setLeft(BinaryNod* bn) { left = bn; }
    void setRight(BinaryNod* bn) { right = bn; }
    void setItem(std::string str) { item = str; }
    bool isItLeaf();
    ~BinaryNod() {}
};

#endif /* BinaryNod_hpp */
