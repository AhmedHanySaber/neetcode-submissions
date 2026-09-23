func hasDuplicate(nums []int) bool {
    // Create a map to track numbers we've seen. 
    // The key is the number from the array, the value is a boolean.
    seen := make(map[int]bool)
    
    for i := 0; i < len(nums); i++ {
        // If the map already has this number marked as true, it's a duplicate.
        if seen[nums[i]] {
            return true
        }
        
        // Otherwise, mark this number as seen.
        seen[nums[i]] = true
    }
    
    return false
}