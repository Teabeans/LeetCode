#include <algorithm>

class Solution {
public:
  vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
    if( A.size( ) == 0 || A[0].size( ) == 0) {
      return( A );
    }
    for( int i = 0 ; i < A.size( ) ; i++ ) {
      // Reverse the vector A[i]
      reverse(A[i].begin(), A[i].end());
    }

    for( int x = 0 ; x < A.size( ) ; x++ ) {
      for( int y = 0 ; y < A[x].size( ) ; y++ ) {
        if( A[x][y] == 0 ) {
          A[x][y] = 1;
        }
        else if ( A[x][y] == 1 ){
          A[x][y] = 0;
        }
      }
      cout << endl;
    }

    return( A );
  }
};
