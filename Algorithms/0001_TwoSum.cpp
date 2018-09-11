class Solution {
public:
  vector<int> twoSum( vector<int>& nums, int target ) {
    vector<int> retVector;
    for( int lowIndex = 0 ; lowIndex < nums.size( ) - 1 ; lowIndex++ ) {
      for( int highIndex = ( lowIndex + 1 ) ; highIndex < nums.size( ) ; highIndex++ ) {
        if( nums[ lowIndex ] + nums[ highIndex ] == target ) {
          retVector = { lowIndex, highIndex };
          return( retVector );
        }
      }
    }
    return( retVector );
  } // Closing twoSum( )
};