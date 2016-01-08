#include "sysTools.h"

#include <cstdio>

namespace Utils{
    namespace Exec{
        FILE* cd(std::string dir){
            FILE * output;
	    
	    std::string comm = "cd ";
	    
	    comm += dir;

            if(!(output = (popen(comm.c_str(), "r")))){
                perror("Error:");
                exit(1);
            }

            if( output != NULL){
                perror("Error: UnKnOwN ErRoR!!! 42");
                pclose(output);
            }

            return output;
        }
    };

    namespace Signals{
        void sigCatcher(int sinal)
        {
            char info[30];

            if( sinal == SIGINT  ){
                sprintf(info, "%s, signal = %d", "SIGINT", (int)SIGINT);
            }
            else if( sinal == SIGTERM  ){
                sprintf(info, "%s, signal = %d", "SIGTERM", (int)SIGTERM);
            }
            else{
                sprintf(info, "%s, signal = %d","UnKnOwN", (int)sinal);
            }
#ifdef ENABLE_VERBOSE
            IO::Output::print_line(info);
#endif
        }

        void setSignals()
        {
            for (int s=1; s<35; s++){
                signal(s, sigCatcher);
            }
        }
    };

    namespace IO{

        namespace Input{

            std::string getDir(int argv, char* *args){
                std::string returns = "";
                for (int i = 1; i < argv; ++i)
                {
                    returns+=args[i];
                    returns+=" ";
                }

                return returns+'&';
            }

        };
#endif

    };
};
