/* ***********************************************************************

  > File Name: 1008_锤子剪刀布.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2017年06月29日 星期四 18时27分54秒

 ********************************************************************** */

#include <iostream>
#include <map>

int compare(int a, int b)
{
    if (a == 'B') {
        if (b == 'J')
            return -1;
        if (b == 'C')
            return 1;
    } else if (a == 'J') {
        if (b == 'B')
            return 1;
        if (b == 'C')
            return -1;
    } else if (a == 'C') {
        if (b == 'B')
            return -1;
        if (b == 'J')
            return 1;
    }
    return 0;
}

int main(int argc, const char* argv[])
{
    int N, draw_cnt = 0;
    std::cin >> N;
    std::map<int, int> win_cnt[2];

    //读取输入并进行统计
    for (int i = 0; i < N; ++i) {
        int a, b;
        char ca, cb;
        std::cin >> ca >> cb;
        a = ca;
        b = cb;
        int result = compare(a, b);
        if (result == 1)        //a胜
            ++win_cnt[0][a];
        else if (result == -1)  //b胜
            ++win_cnt[1][b];
        else                    //平局
            ++draw_cnt;
    }

    //输出结果
    int a_win_cnt = win_cnt[0]['B']+win_cnt[0]['J']+win_cnt[0]['C'];
    int a_lose_cnt = win_cnt[1]['B']+win_cnt[1]['J']+win_cnt[1]['C'];
    std::cout << a_win_cnt << " " << draw_cnt << " " << a_lose_cnt << std::endl;
    std::cout << a_lose_cnt << " " << draw_cnt << " " << a_win_cnt << std::endl;

    char max_ch[2] = {'B', 'B'};
    for (int i = 0; i < 2; ++i) {
        int max_cnt = 0;
        for (std::map<int, int>::iterator it = win_cnt[i].begin(); it != win_cnt[i].end(); ++it)
            if (max_cnt < it->second) {
                max_cnt = it->second;
                max_ch[i] = it->first;
            }
    }
    std::cout << max_ch[0] << " " << max_ch[1];

    return 0;
}
