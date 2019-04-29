/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
private:
    static int camp(Interval& a, Interval& b){return a.start < b.start;}
public:
    vector<Interval> merge(vector<Interval>& intervals) {
        if(intervals.empty()) return vector<Interval>{};
        
        sort(intervals.begin() , intervals.end(), camp);
             
        vector<Interval> res;
        
        res.push_back(intervals[0]);
        
        for(auto& ins : intervals)
        {
            if(ins.start <= res.back().end)
               res.back().end = max(res.back().end, ins.end);
            else
                res.push_back(ins);
        }

        return res;
    }
};