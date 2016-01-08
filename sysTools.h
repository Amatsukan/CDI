#ifndef _SYS_TOOLS_H_
#define _SYS_TOOLS_H_

#include <unistd.h>
#include <signal.h>

#include <string>
#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>

namespace Utils{
    namespace Exec{
        FILE* command(std::string);
    }

    namespace Signals{

        void sigCatcher(int sinal);
        void setSignals();
    }

    namespace IO{
        namespace Input{
            std::string getDir(int argv, char* *args);
        };
    };
};

#endif // _SYS_TOOLS_H_
