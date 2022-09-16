class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        build_heap(nums);
        
        for (int i =0; i < nums.size(); ++i) {
            cout << nums[i] << " ";
        }
        cout << endl;
        
        heap_sort(nums);
        return nums;
    }
    
private:
    void heap_sort(vector<int> &heap) {
        for (int i = heap.size() - 1; i >= 0; --i) {
            swap(heap[0], heap[i]);
            max_heapify(heap, 0, i);
        }
    }
    
    void build_heap(vector<int> &nums) {
        for (int i = nums.size() / 2 - 1; i >= 0; --i) {
            max_heapify(nums, i, nums.size());
        }
    }
    
    void max_heapify(vector<int> &nums, int root_idx, int len) {
        int left_idx = 2 * root_idx + 1, right_idx = 2 * root_idx + 2, max_idx = root_idx;
        
        if (left_idx < len && nums[max_idx] < nums[left_idx]) {
            max_idx = left_idx;
        }
        if (right_idx < len && nums[max_idx] < nums[right_idx]) {
            max_idx = right_idx;
        }
        
        if (max_idx != root_idx) {
            swap(nums[max_idx], nums[root_idx]);
            max_heapify(nums, max_idx, len);
        }
    }
};
