#include "FileHandler.hpp"

BinaryTree FileHandler::read() {
    std::ifstream is;
    is.open(name);
    if (!is.is_open())
    {
        is.close();
        std::ofstream os;
        os.open(name);
        os << "Is it an animal?\nHuman\n.\n.\nDog\n.\n.";
        os.close();
    }
    std::string line;
    std::getline(is, line);
    BinaryTree bt(createNod(line, is));
    return bt;
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

BinaryNod* FileHandler::createNod(std::string item, std::ifstream& is){
    if(item == ".") return nullptr;
    BinaryNod* root = new BinaryNod(item);
    std::getline(is, item);
    root->setLeft(createNod(item, is));
    std::getline(is, item);
    root->setRight(createNod(item, is));
    return root;
}
