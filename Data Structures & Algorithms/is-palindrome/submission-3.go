func isPalindrome(s string) bool {
i,j:=0,len(s)-1
for i<j{

		if !isAlphaNumirc(s[i]) {
			i++
			continue
		}
		if !isAlphaNumirc(s[j]) {
			j--
			continue
		}
		if toLower(s[i]) != toLower(s[j]){
			return false
		}
		i++
		j--
}
return true
}

func isAlphaNumirc(r byte)bool{
return (r >= 'a' && r <= 'z') || (r >= 'A' && r <= 'Z') || (r >= '0' && r <= '9')
}
func toLower(b byte) byte{
if b >= 'A' && b <= 'Z' {
        return b + ('a' - 'A')
    }
    return b
}
	