/* ***********************************************************************

  > File Name: 1007_A除以B.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2017年06月29日 星期四 18时05分48秒

 ********************************************************************** */

#include <iostream>
#include <string>

void do_div(std::string A, int B, std::string &Q, int &R)
{
    int help = 0;
    for (uint32_t i = 0; i < A.size(); ++i) {
        help = help * 10 + (A[i] - '0');
        int q = help / B;
        help %= B;
        if (Q.size() || q)
            Q.insert(Q.end(), q + '0');
    }
    if (!Q.size())
        Q = "0";
    R = help;
}

int main(int argc, const char* argv[])
{
    std::string A, Q;
    int B, R;
    std::cin >> A >> B;
    do_div(A, B, Q, R);
    std::cout << Q << " " << R;

    return 0;
}
