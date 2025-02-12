# Definition for a binary tree node.
# class TreeNode
#     attr_accessor :val, :left, :right
#     def initialize(val = 0, left = nil, right = nil)
#         @val = val
#         @left = left
#         @right = right
#     end
# end
# @param {TreeNode} root
# @return {Integer}

def max_depth(root)
    return 0 if root.nil?

    maxLeft = max_depth(root.left)
    maxRight = max_depth(root.right)

    return ([maxLeft,maxRight].max) + 1
end