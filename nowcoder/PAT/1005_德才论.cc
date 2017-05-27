/* ***********************************************************************

  > File Name: 1005_德才论.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2017年05月27日 星期六 14时51分59秒

 ********************************************************************** */

#include <iostream>
#include <set>

struct StudentInfo {
    uint32_t id;
    uint32_t s1, s2;
    friend bool operator<(const StudentInfo &si1, const StudentInfo &si2)
    {
        uint32_t total_1 = si1.s1 + si1.s2, total_2 = si2.s1 + si2.s2;
        if (total_1 == total_2) {
            if (si1.s1 == si2.s1)
                return si1.id < si2.id;
            return si1.s1 > si2.s1;
        }
        return total_1 > total_2;
    }
};

int main(int argc, const char* argv[])
{
    std::set<StudentInfo> si_set[4];
    StudentInfo si;

    uint32_t N, L, H;
    std::cin >> N >> L >> H;
    for (uint32_t i = 0; i < N; ++i) 
    {
        std::cin >> si.id >> si.s1 >> si.s2;
        if (si.s1 >= L && si.s2 >= L)
        {
            if (si.s1 >= H && si.s2 >= H)
                si_set[0].insert(si);
            else if (si.s1 >= H && si.s2 < H)
                si_set[1].insert(si);
            else if (si.s1 >= si.s2)
                si_set[2].insert(si);
            else
                si_set[3].insert(si);
        }
    }

    std::cout << (si_set[0].size()+si_set[1].size()+si_set[2].size()+si_set[3].size()) << std::endl;
    for (uint32_t i = 0; i < 4; ++i)
        for (auto it : si_set[i])
            std::cout << it.id << " " << it.s1 << " " << it.s2 << std::endl;

    return 0;
}
