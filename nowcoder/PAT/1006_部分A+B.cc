/* ***********************************************************************

  > File Name: 1006_部分A+B.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2017年05月27日 星期六 15时23分42秒

 ********************************************************************** */

#include <iostream>
#include <string>

int main(int argc, const char* argv[])
{
    std::string A[2];
    int d[2], sum[2] = {0};
    std::cin >> A[0] >> d[0] >> A[1] >> d[1];
    for (uint32_t i = 0; i < 2; ++i)
        for (auto ch : A[i])
            if ((ch - '0') == d[i])
                sum[i] = sum[i] * 10 + d[i];
    std::cout << sum[0] + sum[1];

    return 0;
}
