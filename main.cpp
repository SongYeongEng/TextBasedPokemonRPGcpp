#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <windows.h>


/*Include
Polymorphism: Same class threate differntly ?

Encapsulation:Setter getter ?

Inheritance: Maybe pokemon evolution ? or type then inherit.

Abstraction:Later
*/


class Pokemon {
public:
    std::string name;
    std::string type;
    int hp;
    int attack;
    int defense;

    void DisplayInfo(){

    }
    
};

class Player{
public:
    std::vector<Pokemon> party;
    std::string name;
    int money;

    void CapturedPokemon(const Pokemon& newPokemon){

    }
};

class Location{
public:
    std::string name;

    void Visit(Player& player){

    }
};

void ContinueConversation(const std::string& text) {

    std::cout<<"\n"+text<<std::endl;

    for (int i = 0; i < 3; ++i) {  // Blink for a limited number of times
        if (_kbhit()) { // Check if a key has been pressed
                _getch();    // Clear the pressed key
                return;      // Continue to the next conversation
            }
        
        std::cout << "." << std::flush;
        Sleep(500);  // Wait for half a second
        std::cout << "   \b\b\b" << std::flush;  // Clear the dot and move the cursor back
        Sleep(500);  // Wait for half a second
    }

    _getch();
};



class Game{

public:
    void Start(){
        ContinueConversation("Hello There! \nIt is nice to meet you");
        
        ContinueConversation("Welcome to the world of Pokemon!");
      
        ContinueConversation("My name is Rowan.");

        ContinueConversation("Your Pokemon Professor ! Anyways let's get started.");

        ContinueConversation("I would assume you have try out pokemon game before.");



    }
};

int main() {
    Game myGame;
    myGame.Start();
    return 0;
};