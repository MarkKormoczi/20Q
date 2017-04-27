#include <iostream>
#include "Game.hpp"
#include "BinaryTree.hpp"
#include "BinaryNod.hpp"
#include "FileHandler.hpp"

int main(int argc, const char * argv[]) {
    BinaryNod nod7("7");
    BinaryNod nod6("6");
    BinaryNod nod4("4");
    nod4.setLeft(&nod6);
    nod4.setRight(&nod7);
    BinaryNod nod5("5");
    BinaryNod nod3("3");
    nod3.setLeft(&nod4);
    nod3.setRight(&nod5);
    BinaryNod nod2("2");
    BinaryNod nod1("1");
    nod1.setLeft(&nod2);
    nod1.setRight(&nod3);
    BinaryTree tree(&nod1);
    FileHandler fh("file.txt");
    fh.read(&tree);
    std::cout << tree.getRoot()->getRight()->getLeft()->getItem() << std::endl; //4
    Game game(&tree);
    return 0;
}
