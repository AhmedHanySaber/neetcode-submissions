func replaceElements(arr []int) []int {
    for i := 0; i < len(arr); i++ {
        greatest := -1

        for j := i + 1; j < len(arr); j++ {
            if arr[j] > greatest {
                greatest = arr[j]
            }
        }

        arr[i] = greatest
    }

    return arr
}