func isAnagram(s string, t string) bool {
count:=make(map[rune]int)
if len(s) != len(t){return false}
for _,val:=range s {
		count[val]++
}
for _,val:=range t{
	count[val]--
	if count[val]<0 {return false}
}
return true
}
