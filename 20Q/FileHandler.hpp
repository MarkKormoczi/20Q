#ifndef FileHandler_hpp
#define FileHandler_hpp

#include <iostream>
#include <string>
#include <fstream>
#include "BinaryTree.hpp"

class FileHandler{
    std::string name;
public:
    FileHandler(std::string name) : name(name) {
        std::cout << "FileHandler created with: " << name << std::endl;
    }
    BinaryNod* createNod(std::string item, std::ofstream& os);
    void writeNod(BinaryNod* nod, std::ofstream& os);
    void read(BinaryTree* tree);
    void write(BinaryTree* tree);
    ~FileHandler() {}
};
#endif /* FileHandler_hpp */
