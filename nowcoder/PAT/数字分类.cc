/* ***********************************************************************

  > File Name: 数字分类.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2017年04月28日 星期五 15时36分09秒

 ********************************************************************** */

#include <iostream>
#include <iomanip>

int main(int argc, const char* argv[])
{
    int cnt = 0, remain_num = 0, symbol = 1, input = 0, num_cnt = 0;
    double a[5] = {0.0};
    const double THRESHOLD = 1E-7;

    std::cin >> cnt;
    for (int i = 0; i < cnt; ++i)
    {
        std::cin >> input;
        remain_num = input % 5;
        switch (remain_num)
        {
        case 0:
            if (!(input & 1)) a[0] += input;
            break;
        case 1:
            a[1] += (symbol * input);
            symbol = -symbol;
            break;
        case 2:
            a[2] += 1.0;
            break;
        case 3:
            a[3] += input;
            ++num_cnt;
            break;
        case 4:
            if (input > a[4]) a[4] = input;
            break;
        default:
            break;
        }
    }

    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(0);
    for (uint32_t i = 0; i < 5; ++i)
    {
        if (i > 0)
            std::cout << " ";
        if ((a[i] < THRESHOLD) && (a[i] > (-1.0*THRESHOLD))) {
            std::cout << "N";
        } else {
            if (i == 3) {
                std::cout << std::setprecision(1);
                std::cout << (a[i] / num_cnt);
                std::cout << std::setprecision(0);
            } else {
                std::cout << a[i];
            }
        }
    }

    return 0;
}
