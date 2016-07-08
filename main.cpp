#include "test.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    stdout = freopen("output.log", "w", stdout);

    std::cout << "there is main function...\n";

    TestA a;
    
    a.ShowInfo();
   
    std::cout << "quit program...\n";

    return 0; 
}
#main.cpp --- for test class
