func groupAnagrams(strs []string) [][]string {
    m := make(map[[26]int][]string)

    for _, s := range strs {
        var count [26]int

        for _, ch := range s {
            count[ch-'a']++
        }

        m[count] = append(m[count], s)
    }

    ans := [][]string{}

    for _, group := range m {
        ans = append(ans, group)
    }

    return ans
}