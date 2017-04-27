#include "FileHandler.hpp"

void FileHandler::read(BinaryTree* tree) {
    std::string line;
    if (file.is_open())
    {
        getline (file,line);
        tree = new BinaryTree(createNod(line));
    }
    else{
        file.open(name, std::fstream::in | std::fstream::out | std::fstream::trunc);
        file << "Is it an animal?\nHuman\n.\n.\nDog\n.\n.";
    }
    file.close();
}
void FileHandler::write(BinaryTree* tree) {
    std::fstream file;
    file.open(name, std::fstream::in | std::fstream::out | std::fstream::trunc);
    writeNod(tree->getRoot());
    file.close();
}

void FileHandler::writeNod(BinaryNod* nod){
    file << nod->getItem() << std::endl;
    if(!nod->isItLeaf()){
        writeNod(nod->getLeft());
        writeNod(nod->getRight());
    }
    else{
        file << ".\n.\n";
    }
}

BinaryNod* FileHandler::createNod(std::string item){
    std::string line;
    getline (file, line);
    if(line == ".") return nullptr;
    BinaryNod* root = new BinaryNod(item);
    getline (file, line);
    root->setLeft(createNod(line));
    getline (file, line);
    root->setRight(createNod(line));
    return root;
}
