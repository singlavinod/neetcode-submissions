class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l = 0, r = 0, n = nums.size();
        deque<int> deck;
        vector<int> output;

        while(r < n){
            while (!deck.empty() && nums[r] > nums[deck.back()]){
                deck.pop_back();
            }
            deck.push_back(r);

            while(l > deck.front()){
                deck.pop_front();
            }

            if (r >= k - 1){
                output.push_back(nums[deck.front()]);
                l++;
            }
            r++;
        }
        return output;
    }
};
