#include <iostream>
#include <string>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include "px.h"

main()
{
  std::cout <<  "##      ## ######## ##        ######   #######  ##     ## ########\n"; 
  std::cout <<  "##  ##  ## ##       ##       ##    ## ##     ## ###   ### ##\n";       
  std::cout <<  "##  ##  ## ##       ##       ##       ##     ## #### #### ##\n";       
  std::cout <<  "##  ##  ## ######   ##       ##       ##     ## ## ### ## ######\n";   
  std::cout <<  "##  ##  ## ##       ##       ##       ##     ## ##     ## ##\n";       
  std::cout <<  "##  ##  ## ##       ##       ##    ## ##     ## ##     ## ##\n";       
  std::cout <<  " ###  ###  ######## ########  ######   #######  ##     ## ########\n";

  std::cout << "                    ########  #######\n";                                                  
  std::cout << "                       ##    ##     ##\n";                                                 
  std::cout << "                       ##    ##     ##\n";                                                 
  std::cout << "                       ##    ##     ##\n";                                                 
  std::cout << "                       ##    ##     ##\n";                                                 
  std::cout << "                       ##    ##     ##\n";                                                 
  std::cout << "                       ##     #######\n";

  std::cout << "########     ###    ########     ###    ########   #######  ##     ##\n"; 
  std::cout << "##     ##   ## ##   ##     ##   ## ##   ##     ## ##     ##  ##   ##\n";
  std::cout << "##     ##  ##   ##  ##     ##  ##   ##  ##     ## ##     ##   ## ##\n";   
  std::cout << "########  ##     ## ########  ##     ## ##     ## ##     ##    ###\n";    
  std::cout << "##        ######### ##   ##   ######### ##     ## ##     ##   ## ##\n";   
  std::cout << "##        ##     ## ##    ##  ##     ## ##     ## ##     ##  ##   ##\n";  
  std::cout << "##        ##     ## ##     ## ##     ## ########   #######  ##     ##\n";

  do {
  std::cout << "=================\n";
  std::cout << "|Choose your class|\n";
  std::cout << "1) |Mage   |\n";
  std::cout << "2) |Warrior|\n";
  std::cout << "3) |Rogue  |\n";
  std::cout << "=================\n\n:";
  std::cin >> crclass;
  } while (crclass < 1 || crclass > 3);

  if (crclass == 1) {
    std::cout << "You chose Mage! (Careful with those flames!)\n";
  }
  else if (crclass == 2) {
    std::cout << "You chose Warrior! (I used to be and adventurer like you but then I... Ok I'll stop)\n";
  }
  else {
    std::cout << "you chose Rogue! (Typical stealth archer build again huh?)\n";
  }

  sSlp(1000);
  
  do {
  std::cout << "You wake up dazed and confused, in a dark room, you're on the ground.\n the ground is cold and dirty.\n";
  std::cout << "You look around to see one beam of light shining brightly through a window\n which has thick steel bars covering it, a wooden table which is old and rotten, it looks to have been here a while.\n";
  sSlp(7000);
  std::cout << "You see a door, also with the same thick steel bars on it, you are in a Prison cell, you get up and instantly feel a rush to your head, your vision begins to blur,\n wondering how long your were out, you start looking for a way out.\n\n";
  std::cout << "========================================\n";
  std::cout << "1) Check by the cell door for a way out.\n";
  std::cout << "2) Check the walls for any instabilties.\n";
  std::cout << "========================================\n\n:";
  std::cin >> choise;
  } while (choise < 1 || choise > 2);

  if (choise == 1) {
    std::cout << "You check for anything to exploit in the cell door\n but it's too strong there's no way you're getting through that.\n";
  }
  else if (choise == 2) {
    std::cout << "You check the walls for any way out.\n";
  }
  
  if (choise == 1) {
    std::cout << "while taking a look around the room you see a wall and a loose rock hmm...\n";
  }
  else {
    std::cout << "You find a loose rock in the wall you started looking at...\n";
  }
  
  sSlp(3000);

  std::cout << "*You yank the rock you found out of the wall and you find*: ";
  if (crclass == 1) {
    std::cout << "A Spell Tome!\n";
    tool = "spell";
  }
  else if (crclass == 2){
    std::cout << "A Hammer!\n";
    tool = "hammer";
  }
  else {
    std::cout << "A Lockpick!\n";
    tool = "lockpick";
  }

  sSlp(3000);
  
  std::cout << "'this " << tool << " is what I'll use to get outta here.'\n";
  std::cout << "you say under your breath with confidence\n you walk over to the cell door.\n";
  sSlp(3000);
  std::cout << "You use the " << tool << " to unlock the door.\n";
  std::cout << "Finally free, you proceed with caution. ";

  std::cout << "*it's dark so damn dark.*\n";

  if (crclass == 1) {
    std::cout << "Wait, I can just to this\n *Conjures flame in hand*\n That's better.\n";
  }
  else {
    std::cout << "If only I had some magic to light this room up. You continue in the dark.\n";
  }

  sSlp(5000);
  
  do {
  std::cout << "You come up to another cell 'Hey, hey man you're breaking out right? Help me I'll help you man...C'mon!'\n\n";
  std::cout << "What do you do?\n";
  std::cout << "==========================\n";
  std::cout << "1) Break the prisoner out.\n";
  std::cout << "2) Leave him.\n";
  std::cout << "==========================\n\n:";
  std::cin >> choise;
  } while (choise < 1 || choise > 2);

  if (choise == 1){
    std::cout << "You use your " << tool << " to get him out.\n";
    std::cout << "Hey, thanks man. let's get the hell outta here.\n\n";
    partner = true;
  }
  else {
    std::cout << "'hey, Hey, HEY Where you going MAN?!? I Gotta get outta here!'\n His voice fades as you keep walking. (Your fate has shifted...)\n\n";
  }
  
  sSlp(3000);

  if (partner) {
    std::cout << "You proceed with your newfound friend. (Good to have some company.)\n";
  }
  else {
    std::cout << "You proceed on your own. (You don't need any help.)\n";
  }

  std::cout << "\n\nPress any key and then ENTER to exit, thanks for playing,\n";

  std::cout << "########     ###    ########     ###    ########   #######  ##     ##\n"; 
  std::cout << "##     ##   ## ##   ##     ##   ## ##   ##     ## ##     ##  ##   ##\n";
  std::cout << "##     ##  ##   ##  ##     ##  ##   ##  ##     ## ##     ##   ## ##\n";   
  std::cout << "########  ##     ## ########  ##     ## ##     ## ##     ##    ###\n";    
  std::cout << "##        ######### ##   ##   ######### ##     ## ##     ##   ## ##\n";   
  std::cout << "##        ##     ## ##    ##  ##     ## ##     ## ##     ##  ##   ##\n";  
  std::cout << "##        ##     ## ##     ## ##     ## ########   #######  ##     ##\n";
  std::cin >> temp;
  return 0;
}