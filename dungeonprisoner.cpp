//  PP1 - Dungeon's Prisoner
//
//  Description: Player is a prisoner and will have to escape from a dungeon.
//  He carries a small backpack with some items that could help him to escape and fight enemies.
//  At each scenario the player will be given the chance to choose any tool from his backpack.
//  Only one tool will be able to help him. If he chooses the right one he moves to next scenario; otherwise, he dies, and the game is over.
//
//  Created by Gleici Pereira on 3/28/20.
//  Copyright © 2020 Gleici Pereira. All rights reserved.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Player's backpack inventory
vector <string> backpack {"shield", "rope", "xglasses", "saw", "sword"};
vector<string>::iterator backpackIterator;

void backpackItems(); // displays backpack items
void scen1 ();  // Prison cell //Functions to each scenario
void scen2 ();  // Hall
void scen3 ();  // Lab
void scen4 ();  // Living room

int main ()
{
    //Introduction to the game
    cout << "\nWelcome player! This is the Dungeon's Prisoner game.\n";
    cout << "\nYou are a prisoner inside a dungeon, and your mission is to escape.\n";
    cout << "There are four guardians located inside the dungeon.\n";
    cout << "You also have a backpack with items that could help you. Choose wisely, or die a prisoner.\n";
    
    //First scenario description
    cout << "\nYour mission starts now!\n";
    cout << "\nYou woke up lost and locked inside a small prison cell. It is cold, dark, and you can hear some rain drops falling behind you. The cell has no windows, but has some metal bars in front of you. An item from your backpack could help you to escape.\n";
    
    //Displaying backpack items
    cout << "\nThe items in your backpack are:\n";
    backpackItems();
    scen1();
    
    //Second scenario description
    cout << "\nYou are running down a long hall, and two enemy critters who cannot be seen are ahead of you. Maybe one weapon from your backpack could help you now.\n";
    
    cout << "\nThe items in your backpack are:\n";
    backpackItems();
    scen2();
    
    //Third scenario description
    cout << "\nAt the end of the hall you found a creepy lab. You see some dead bodies in tubes and big machines feeding on them. A giant warrior runs towards you while he spins his flail weapon.\n";
    
    cout << "\nThe items in your backpack are: \n";
    backpackItems();
    scen3();
    
    //Fourth scenario description
    cout <<"\nYou run towards a huge room, and you are now in the last battlefield. If you defeat the female warrior who is carrying a gold sword you will be finally free from this place. Maybe a weapon could help you.\n";
    
    cout << "\nThe items in your backpack are: \n";
    backpackItems();
    scen4();
    
    //Fifth scenario description
    cout << "I bet you never imagined what existed outside of this dungeon. You see a world without sun, purple sky, and a soil that looks like blood. You are free! Good luck on your next adventure.";
    
    return 0;
  
}


void backpackItems()
{
    for (int i = 0; i < backpack.size(); ++i)
    {
        cout << backpack [i] << endl;
    }
  
  return;
}


void scen1 ()
{
   string choice1;
   cout << "\nChoose an item that will help you to escape the cell: ";
   cin >> choice1;
   
   if (choice1 == "saw")
   {
       cout << "\nWell done. You are now out of the cell.\n";
       backpack.erase((backpack.begin()+3));
   }
   else
   {
       cout << "\nGame Over. Only a saw could break the bars.\n";
       
       exit(0);
       
   }

   return;
    
    
}

void scen2 ()
{
   string choice2;
   cout << "\nChoose a weapon that could help you to defeat them: ";
   cin >> choice2;
   
   if (choice2 == "xglasses")
   {
       cout << "\nYou were able to see and fight them. They look dead, and now you are ready for the next battlefield.\n";
       backpack.erase((backpack.begin()+2));
    
   }
   else
   {
       cout << "\nYou will be dead in a second. Game Over";
       
       exit (0);
       
   }

   return;
    
}

void scen3 ()
{
   string choice3;
   cout << "\nChoose one weapon that could help you to defeat him: ";
   cin >> choice3;
   
   if (choice3 == "shield")
   {
       cout << "\nGreat job. You were able to protect yourself and the giant is on the floor. You seem ready for the next fight\n";
       backpack.erase((backpack.begin()+0));
   }
   else
   {
       cout << "\nYou should have protected yourself first. Game Over";
       exit (0);
   }

   return;
}


void scen4 ()
{
   string choice4;
   cout << "\nChoose a weapon that could help you to defeat her: ";
   cin >> choice4;
   
   if (choice4 == "sword")
   {
       cout << "\nThat was a worthy battle! You can run towards the EXIT.\n";
    
   }
   else
   {
       cout << "\nYou came close, but you cannot win this fight using a rope. Game over.";
       exit (0);
       
   }

   return;
}

