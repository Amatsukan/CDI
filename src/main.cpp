#include <iostream>
#include "sysTools.h"

int main(int argc, char **argv) {
    Utils::Signals::setSignals();
    std::string dir = Utils::IO::Input::getDir(argc, argv);
    
    
    return 0;
}
