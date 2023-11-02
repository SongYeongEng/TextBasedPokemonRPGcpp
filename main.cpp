#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <windows.h>


/*Include
Polymorphism: Same class threate differntly ?

Encapsulation:Setter getter  yes, used in setting player name?

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

     void SetPlayerName(const std::string& playerName) {
        // You can add validation or processing here if needed
        name = playerName;
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
        Player player;

        ContinueConversation("Hello There! \nIt is nice to meet you\nPress any button to conitnue the conversation.");
        
        ContinueConversation("Welcome to the world of Pokemon!");
      
        ContinueConversation("My name is Rowan.");

        ContinueConversation("Your Pokemon Professor ! Anyways let's get started.");

        ContinueConversation("I would assume you have try out pokemon game before.");

        ContinueConversation("Why dont you tell me a little about youreslf");

        std::cout<<"\nWhat is your name ?"<<std::endl;
        std::cout << "Enter your name: ";
        std::string playerName;
        std::cin >> playerName;
        player.SetPlayerName(playerName);

        ContinueConversation("Nice to me you "+player.name+" !");


    }
};

int main() {
    Game myGame;
    myGame.Start();
    return 0;
};