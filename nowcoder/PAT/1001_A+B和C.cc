#include <iostream>
 
int main()
{
    uint32_t cnt = 0;
    int64_t a = 0, b = 0, c = 0;
     
    std::cin >> cnt;
    for (uint32_t i = 0; i < cnt; ++i)
    {
        std::cin >> a >> b >> c;
        std::cout << "Case #";
        if (a + b > c)
            std::cout << i+1 << ": true" << std::endl;
        else
            std::cout << i+1 << ": false" << std::endl;
    }
     
    return 0;
}