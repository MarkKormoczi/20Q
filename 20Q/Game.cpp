#include "Game.hpp"

std::string Game::getQuestion(){
    return pos->getItem();
}
void Game::answer(bool yn){
    if(yn) pos = pos->getRight();
    else pos = pos->getLeft();
}
void Game::insert(std::string question, std::string answer){
    std::string current = getQuestion();
    pos->setLeft(new BinaryNod(current));
    pos->setRight(new BinaryNod(answer));
    pos->setItem(question);
}
