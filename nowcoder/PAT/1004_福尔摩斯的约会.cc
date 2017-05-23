/* ***********************************************************************

  > File Name: 福尔摩斯的约会.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2017年05月23日 星期二 17时53分06秒

 ********************************************************************** */

#include <iostream>
#include <map>
#include <string>

int main(int argc, const char* argv[])
{
    std::map<char, std::string> str_map[2] = 
    {
        {{'A', "MON"},{'B', "TUE"},{'C', "WED"},{'D', "THU"},{'E', "FRI"},{'F', "SAT"},{'G', "SUN"}},
        {   
            {'0', "00"},{'1', "01"},{'2', "02"},{'3', "03"},{'4', "04"},{'5', "05"},{'6', "06"},{'7', "07"},{'8', "08"},{'9', "09"},{'A', "10"},{'B', "11"},
            {'C', "12"},{'D', "13"},{'E', "14"},{'F', "15"},{'G', "16"},{'H', "17"},{'I', "18"},{'J', "19"},{'K', "20"},{'L', "21"},{'M', "22"},{'N', "23"}
        }
    };
    uint32_t week_idx, hour_idx, min_idx;
    std::string input[4], output;
    for (uint32_t i = 0; i < 4; ++i)
        std::cin >> input[i];

    //获取工作日
    uint32_t i = 0;
    for (; i < input[0].size() && i < input[1].size(); ++i) {
        char h1 = input[0][i], h2 = input[1][i];
        if (h1 >= 'A' && h1 <= 'G' && h1 == h2) {
            output = str_map[0][h1];
            break;
        }
    }

    //获取小时
    for (; i < input[0].size() && i < input[1].size(); ++i) {
    }

    return 0;
}
