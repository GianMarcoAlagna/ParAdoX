#include <iostream>
#include <string>
#include <stdlib.h>
#include <chrono>
#include <thread>

void sSlp(int msec) {
    std::this_thread::sleep_for(std::chrono::milliseconds(msec));
}