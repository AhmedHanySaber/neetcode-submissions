func hasDuplicate(nums []int) bool {
    set:=make(map[int]int)
    for _,r :=range nums{
        if set[r]!=0{
            return true
        }
        set[r]+=1
    }
   return false
}