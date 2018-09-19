#import <queue>

class Solution {
public:
  vector<int> sortArrayByParity(vector<int>& A) {
    queue<int> odds;
    queue<int> evens;
    for( int i = 0 ; i < A.size() ; i++ ) {
      if( A[i] % 2 == 0 ) {
        evens.push( A[i] );
      }
      else {
        odds.push( A[i] );
      }
    }
      
    vector<int> retVector;
    while( !evens.empty( ) ) {
      retVector.push_back( evens.front( ) );
      evens.pop( );
    }
    while( !odds.empty( ) ) {
      retVector.push_back( odds.front( ) );
      odds.pop( );
    }
    return( retVector );
  }
};
