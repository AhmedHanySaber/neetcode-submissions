func twoSum(nums []int, target int) []int {
    m:=make(map[int]int)
	for i,r:=range nums{
		t:=target-r
    if idx,ok:=m[t];ok && m[t]!=i{
		return []int{idx,i}
	} 
	m[r]=i
	}
	return []int{}
}
