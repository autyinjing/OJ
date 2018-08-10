class Solution {
public:
    bool judgeCircle(string moves) {
        if (moves.size() % 2)
            return false;

        int sum[2] = {0};
        for (int i = 0; i < moves.size(); ++i) {
            switch (moves[i])
            {
            case 'L': ++sum[0]; break;
            case 'R': --sum[0]; break;
            case 'U': ++sum[1]; break;
            case 'D': --sum[1]; break;
            }
        }
        return (!sum[0] && !sum[1]);
    }
};
