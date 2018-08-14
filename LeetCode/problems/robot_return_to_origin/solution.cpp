class Solution {
public:
    bool judgeCircle(string moves) {
        int h,v;
        h=v=0;
        
        for(auto it:moves)
        {
            if(it=='U')
                ++v;
            else if(it == 'D')
                --v;
            else if(it=='L')
                --h;
            else
                ++h;
        }
        return !h && !v;
    }
};