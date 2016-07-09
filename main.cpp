#include "test.h"
#include <stdio.h>
#include <stdlib.h>


void whatTheFuck(void)
{
     std::cout << "what the fuck...\n";
}

int main(int argc, char *argv[])
{
    stdout = freopen("./output.log", "w", stdout);

    std::cout << "there is main function...\n";

    TestA a;
    
    a.ShowInfo();
   
    std::cout << "quit program...\n";
    
    atexit(whatTheFuck);

    return 0; 
}
