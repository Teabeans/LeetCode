/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
  TreeNode* mergeTrees( TreeNode* tnptr1, TreeNode* tnptr2 ) {
    // Condition 1, both nodes are null
    if( tnptr1 == nullptr && tnptr2 == nullptr ) {
      return( nullptr );
    }

    // Condition 2, T1 is null
    else if( tnptr1 == nullptr ) {
      tnptr2->right = mergeTrees( nullptr, tnptr2->right );
      tnptr2->left  = mergeTrees( nullptr, tnptr2->left );
      return( tnptr2 );
    }

    // Condition 3, T2 is null
    else if( tnptr2 == nullptr ) {
      tnptr1->right = mergeTrees( tnptr1->right, nullptr );
      tnptr1->left  = mergeTrees( tnptr1->left,  nullptr );
      return( tnptr1 );
    }

    // Condition 4, neither node is null
    else {
      tnptr1->val += tnptr2->val;
      tnptr1->right = mergeTrees( tnptr1->right, tnptr2->right );
      tnptr1->left  = mergeTrees( tnptr1->left,  tnptr2->left );
      return( tnptr1 );
    }
  }
};
