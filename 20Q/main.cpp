#include <iostream>
#include "Game.hpp"
#include "BinaryTree.hpp"
#include "BinaryNod.hpp"
#include "FileHandler.hpp"

int main(int argc, const char * argv[]) {
    BinaryNod nod("First Nod");
    BinaryTree tree(&nod);
    FileHandler fh("file.txt");
    Game game(&tree);
    return 0;
}
