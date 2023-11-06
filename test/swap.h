#ifndef _MYSWAP
#define _MYSWAP
#include <iostream>


class Myswap
{
public:
    Myswap(int& a,  int& b) {
        m_a = a;
        m_b = b;
        m_pA = NULL;
    }
    ~Myswap(){
        if (m_pA) delete (m_pA);
    }
    Myswap(Myswap& myswap);
    void Swap();
    int GetPramA();
    void GetPramAaddress();
    int GetPramB();
    bool IsSameAddress( int a);
private:
    int m_a;
    int m_b;
    int* m_pA;

};

#endif



