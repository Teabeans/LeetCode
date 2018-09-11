class Solution {
public:
  int numJewelsInStones(string J, string S) {
    int matches = 0;
    // For every character in string S
    for( int i = 0 ; i < S.length() ; i++ ) {
      // Check every character in string J for a match 
      for( int j = 0 ; j < J.length() ; j++ ) {
        // If the characters match...
        if( S.at(i) == J.at(j) ) {
          matches++;
          break;
        }
      }
    }
    return( matches );
  }
};