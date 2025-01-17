var removeElement = function (nums, val) {
    let left = 0;
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] != val) {
            nums[left] = nums[i];
            left++;
        }
    }
    return left;
};

const nums = [0, 1, 2, 2, 3, 0, 4, 2];
const val = 2;

console.log(nums, removeElement(nums, val));