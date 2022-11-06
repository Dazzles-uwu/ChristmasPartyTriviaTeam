/******************************************************************************

                              This code is used
                          specifically for creating Teams
                  randomly assigning and allocating them without bias
                            
*******************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

void playerAdd();

vector<string> players;
vector<string> team1;
vector<string> team2;
vector<string> team3;

int main()
{
    bool programEnd = false;
    string userInputMainMenu;
    
    players.push_back("Daffa");
    players.push_back("Robert");
    players.push_back("David");
    
    cout << "Hello World" << endl;
    cout << "Welcome to Daffa's Program" << endl;
    cout << "\n";
    
    while (!programEnd) {
        cout << "(1) View Teams" << endl;
        cout << "(2) View Players" << endl;
        cout << "(3) Create Teams" << endl;
        cout << "(4) Add Players" << endl;
        cout << "(5) Delete Player" << endl;
        cout << "(6) Quit" << endl;
        cout << "\n";
        
        getline(cin, userInputMainMenu);
        
        if (userInputMainMenu == "6" || userInputMainMenu == "quit" || userInputMainMenu == "exit") {
            programEnd = true;
        } else if (userInputMainMenu == "1") {
            
        } else if (userInputMainMenu == "2") {
            playerAdd();
            system("clear");
        } else {
            system("clear");
            cout << "Please Choose a valid option" << endl;
            cout << "Your input: " + userInputMainMenu << endl;
            cout << "\n\n";
        }
    }

    return 0;
}

void teamCreate() {

}

void teamView() {
    
}

void playerAdd() {
    bool stopAddingPlayers = false;
    string userInputPlayerAddOption;
    string userInputPlayerName;
    
    while (!stopAddingPlayers) {
        
        cout << "Current Players List:" << endl;
        
        if (players.size() == 0) {
            cout << "No Players have been added" << endl;
        } else {
            for (int i = 0; i < players.size(); i++) {
                cout << players[i] << endl;
            }
        }
        
        cout << "\n\n";
        cout << "Add a new player? (y/n)" << endl;
        
        getline(cin, userInputPlayerAddOption);
        
        if (userInputPlayerAddOption == "yes" || userInputPlayerAddOption == "y") {
            bool validPlayerName = false;
            
            while (!validPlayerName) {
                cout << "Enter name of player" << endl;
                getline(cin, userInputPlayerName);
                
                if (userInputPlayerName != "") {
                    players.push_back(userInputPlayerName);
                    cout << "You have added: " + userInputPlayerName << endl;
                    system("clear");
                    validPlayerName = true;
                } else {
                   cout << "Please enter a valid name" << endl; 
                }
            }
        } else if (userInputPlayerAddOption == "no" || userInputPlayerAddOption == "n") {
            stopAddingPlayers = true;
        } else {
            cout << userInputPlayerAddOption + " is an invalid input" << endl;
        }
    }
}

void deletePlayer() {
    
}
