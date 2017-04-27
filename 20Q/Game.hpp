#ifndef Game_hpp
#define Game_hpp

#include <iostream>
#include <string>
#include "BinaryNod.hpp"
#include "BinaryTree.hpp"

class Game{
    BinaryNod* pos;
public:
    Game(BinaryTree* tree) : pos(tree->getRoot()) { std::cout << "Game created" << std::endl; }
    void setPos(BinaryNod* nod) { pos = nod; }
    BinaryNod* getPos() { return pos; }
    std::string getQuestion();
    void answer(bool yn);
    void insert(std::string question, std::string answer);
    ~Game() {}
};

#endif /* Game_hpp */
