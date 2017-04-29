#include <iostream>
#include "Game.hpp"
#include "BinaryTree.hpp"
#include "BinaryNod.hpp"
#include "FileHandler.hpp"

#define commandline

int main(int argc, const char * argv[]) {
    FileHandler fh("file.txt");
    BinaryTree tree = fh.read();
    Game game(&tree);
#ifdef commandline
    while(!game.getPos()->isItLeaf()){
        std::cout << game.getQuestion() << " Y/N" <<std::endl;
        std::string str;
        std::cin >> str;
        if(str == "Y" || str == "y") game.answer(true);
        else if(str == "N" || str == "n") game.answer(false);
        else std::cout << "Answer with Y or N" << std::endl;
    }
    std::string ans = game.getQuestion();
    std::cout << "I know! " << ans << "? Y/N" <<std::endl;
    std::string str;
    while(true){
        std::cin >> str;
        if(str == "Y" || str == "y" || str == "N" || str == "n") break;
        else std::cout << "Answer with Y or N" << std::endl;
    }
    if(str == "Y" || str == "y"){
        std::cout << "YAY!" << std::endl;
    }
    else if(str == "N" || str == "n"){
        std::string newQuestion;
        std::string newAnswer;
        std::cout << "Write a question, that isn't true for: " << ans << std::endl;
        std::getline(std::cin.ignore(1), newQuestion);
        std::cout << "Write an answer, that is true for: " << newQuestion << std::endl;
        std::getline(std::cin, newAnswer);
        std::cout << "Thanks for playing!";
        game.insert(newQuestion, newAnswer);
    }
#endif
    fh.write(&tree);
    return 0;
}
