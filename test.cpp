#include "test.h"

TestA::TestA(void):m_name("TestA") 
{
    std::cout << "TestA construct...\n";
}

TestA::~TestA(void)
{
    std::cout << "TestA destruct...\n";
}

void TestA::ShowInfo(void) const
{
    std::cout << "TestA::m_name = " << m_name << std::endl;
}

