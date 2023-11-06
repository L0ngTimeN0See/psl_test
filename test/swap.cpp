#include "swap.h"

void Myswap::Swap()
{
    int temp = m_a;
    m_a = m_b;
    m_b = temp;
}

int Myswap::GetPramA()
{
    return m_a;
}

int Myswap::GetPramB()
{
    return m_b;
}

bool Myswap::IsSameAddress(int a)
{
    // return GetPramAaddress() == &a;
    return true;
}

void Myswap::GetPramAaddress() {
    printf("%p\n", &m_a);
    // return &m_a;
}


Myswap::Myswap(Myswap& myswap){
    int* temp = new int;
    *temp = *myswap.m_pA;
    m_pA = temp;
    delete(temp);
}