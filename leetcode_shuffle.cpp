class Solution {
    
private:
      vector<int> array;
      vector<int> original; 
    
public:
    
    Solution(vector<int>& nums) {
        array = nums;
        original =  array;
    }


    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        array = original;
        // original = original;
        return original;
    }
    
    void swap(int* a, int* b) {
        int temp = *a;
        *a = *b;
        *b = temp;  
    } 
    

    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        for (int i = array.size()-1; i>0; i--) {
            int j = rand() % (i+1);
            swap(&array[i], &array[j]);
        }
        
        return array;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */