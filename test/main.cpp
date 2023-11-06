#include "swap.h"
#include <map>
#include <string>

int main(int argc, char const *argv[])
{
    std::map<int, std::string> mapSet = {{0 , "No"}, {1 , "Yes"}};
    int a = 10;
    int b = 20;
    Myswap mytest(a, b);
    
    
    printf("%p\n", &a);
    mytest.GetPramAaddress();
    std::cout << "a and m_a is " << a << " " << mytest.GetPramA() << std::endl;
    
    std::cout << "a and m_a is the same address? " << mapSet[mytest.IsSameAddress(a)] << std::endl;
    std::cout << "Before swap : " << "m_a = " << mytest.GetPramA() << ", m_b = " << mytest.GetPramB() << std::endl;
    mytest.Swap();
    std::cout << "After swap : " << "m_a = " << mytest.GetPramA() << ", m_b = " << mytest.GetPramB() << std::endl;
    return 0;
}
