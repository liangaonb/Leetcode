/*
 * @lc app=leetcode.cn id=239 lang=cpp
 *
 * [239] 滑动窗口最大值
 */

// @lc code=start
class Solution {
    //维护一个单调递减的队列，队首就是当前窗口最大值
    class MyQueue{
        public:
            deque<int> deque;

            void pop(int val){
                if(!deque.empty() && deque.front()==val){
                    deque.pop_front();
                }
            }

            void push(int val){
                while(!deque.empty() && val>deque.back()){
                    deque.pop_back();
                }
                deque.push_back(val);
            }

            int front(){
                return deque.front();
            }
    };

public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        MyQueue que;
        vector<int> res;
        for (int i = 0; i < k; i++){
            que.push(nums[i]);
        }
        res.push_back(que.front());
        for (int i = k; i < nums.size(); i++){
            que.pop(nums[i - k]);
            que.push(nums[i]);
            res.push_back(que.front());
        }
        return res;
    }
};
// @lc code=end

