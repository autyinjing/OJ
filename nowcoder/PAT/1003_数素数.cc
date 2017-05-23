/* ***********************************************************************

  > File Name: 数素数.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2017年05月12日 星期五 18时14分36秒

 ********************************************************************** */

#include <iostream>

//线性筛法求素数表
const uint32_t M = 150000;
const uint32_t N = 30000;
bool check[M] = {true, true};
uint32_t primes[N];
uint32_t prime_cnt = 0;

void getPrimeTable()
{
    for (uint32_t i = 2; i < M; ++i)
    {   
        if (!check[i])
            primes[prime_cnt++] = i;
        for (uint32_t j = 0; (j < prime_cnt) && (i*primes[j] < M); ++j)
        {   
            check[i*primes[j]] = true;
            if (!(i % primes[j]))
                break;
        }   
    }   
}

void printPrimer(uint32_t m, uint32_t n)
{
    if (m > n)
        return;
    uint32_t cnt = n - m + 1;
    for (uint32_t i = 0; i < cnt; ++i, ++m)
    {
        std::cout << primes[m-1];
        if (!((i+1)%10))
            std::cout << std::endl;
        else if (i < cnt - 1)
            std::cout << " ";
    }
}

int main(int argc, const char* argv[])
{
    getPrimeTable();
    uint32_t m = 0, n = 0;
    std::cin >> m >> n;
    printPrimer(m, n);

    return 0;
}
