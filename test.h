#ifndef _TEST_H_
#define _TEST_H_
#include <string>
#include <iostream>

class TestA
{
private:
    std::string m_name;
public:
    TestA(void);
    virtual ~TestA(void);

     void ShowInfo(void) const;
protected:
     TestA(const TestA &);
     TestA & operator=(const TestA &);
};

#endif
//end test.h
