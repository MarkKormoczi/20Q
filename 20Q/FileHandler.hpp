#ifndef FileHandler_hpp
#define FileHandler_hpp

#include <iostream>
#include <string>
#include <fstream>
#include "BinaryTree.hpp"

class FileHandler{
    std::string name;
    std::fstream file;
public:
    FileHandler(std::string name) : name(name), file(std::fstream(name)) {
        std::cout << "FileHandler created with: " << name << std::endl;
    }
    BinaryNod* createNod(std::string item);
    void writeNod(BinaryNod* nod);
    void read(BinaryTree* tree);
    void write(BinaryTree* tree);
    ~FileHandler() {}
};
#endif /* FileHandler_hpp */
