#ifndef BinaryNod_hpp
#define BinaryNod_hpp

#include <iostream>
#include <string>

class BinaryNod{
    BinaryNod* left;
    BinaryNod* right;
    std::string item;
    
public:
    BinaryNod(std::string item) : item(item), left(nullptr), right(nullptr) { std::cout << "Nod created" << std::endl; }
    BinaryNod* getLeft() { return left; }
    BinaryNod* getRight() { return right; }
    std::string getItem() { return item; }
    void setLeft(BinaryNod* bn) { left = bn; }
    void setRight(BinaryNod* bn) { right = bn; }
    bool isItLeaf();
    ~BinaryNod() {}
};

#endif /* BinaryNod_hpp */
