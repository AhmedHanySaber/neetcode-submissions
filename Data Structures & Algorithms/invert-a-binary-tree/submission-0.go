func invertTree(root *TreeNode) *TreeNode {
    // 1. Base Case: If the node is nil, stop and return it
    if root == nil {
        return nil
    }
    
    // 2. The Action: Swap the left and right children
    root.Left, root.Right = root.Right, root.Left
    
    // 3. Recursive Steps: Now invert the subtrees we just swapped
    invertTree(root.Left)
    invertTree(root.Right)
    
    // 4. Return the fully inverted tree
    return root
}