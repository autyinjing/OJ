/* ***********************************************************************

  > File Name: 福尔摩斯的约会.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2017年05月23日 星期二 17时53分06秒

 ********************************************************************** */

#include <iostream>
#include <map>
#include <string>
#include <cctype>

int main(int argc, const char* argv[])
{
    std::string weekday[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
    std::string input[4], output;
    for (uint32_t i = 0; i < 4; ++i)
        std::cin >> input[i];

    //获取工作日
    uint32_t i = 0;
    for (; i < input[0].size() && i < input[1].size(); ++i) {
        char h1 = input[0][i], h2 = input[1][i];
        if (h1 >= 'A' && h1 <= 'G' && h1 == h2) {
            output = weekday[h1-'A'];
            break;
        }
    }

    //获取小时
    for (++i; i < input[0].size() && i < input[1].size(); ++i) {
        char h1 = input[0][i], h2 = input[1][i];
        if (h1 == h2) {
            if (h1 >= '0' && h1 <= '9') {
                output += " " + ("0" + std::to_string(h1-'0')) + ":";
                break;
            } else if (h1 >= 'A' && h1 <= 'N') {
                output += " " + std::to_string(h1-'A'+10) + ":";
                break;
            }
        }
    }

    //获取分钟
    for (uint32_t j = 0; j < input[2].size() && j < input[3].size(); ++j) {
        char h1 = input[2][j], h2 = input[3][j];
        if (isalpha(h1) && (h1 == h2)) {
            std::string help = std::to_string(j);
            if (help.size() == 1)
                help = "0" + help;
            output += help;
            break;
        }
    }

    std::cout << output;

    return 0;
}
