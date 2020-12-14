#include <iostream>
#include <string>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <vector>

std::vector <std::string> inventory;

void sSlp(int msec) 
{
    std::this_thread::sleep_for(std::chrono::milliseconds(msec));
}

void rInv() 
{

  for (int i = 0; i < inventory.size(); i++) {
   
   std::cout << inventory[i] << "\n";
   
   }
}