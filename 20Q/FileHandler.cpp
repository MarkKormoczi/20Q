#include "FileHandler.hpp"

void FileHandler::read(BinaryTree* tree) {
    /*
    std::string line;
    file.open(name, std::fstream::in | std::fstream::out | std::fstream::trunc);
    if (file.is_open())
    {
        getline (file,line);
        std::cout << line << std::endl;
        tree = new BinaryTree(createNod(line));
    }
    else{
        file << "Is it an animal?\nHuman\n.\n.\nDog\n.\n.";
    }
    file.close();*/
}
void FileHandler::write(BinaryTree* tree) {
    std::ofstream os;
    os.open(name);
    writeNod(tree->getRoot(), os);
}

void FileHandler::writeNod(BinaryNod* nod, std::ofstream& os){
    os << nod->getItem() << std::endl;
    if(!nod->isItLeaf()){
        writeNod(nod->getLeft(), os);
        writeNod(nod->getRight(), os);
    }
    else{
        os << ".\n.\n";
    }
}

BinaryNod* FileHandler::createNod(std::string item, std::ofstream& os){
    /*if(item == ".") return nullptr;
    BinaryNod* root = new BinaryNod(item);
    getline(file, item);
    root->setLeft(createNod(item));
    getline (file, item);
    root->setRight(createNod(item));
    return root;*/
    return nullptr;
}
