class Solution {
public:
  vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int> retVector;

    sort( nums1.begin( ), nums1.end( ) );

    sort( nums2.rbegin( ), nums2.rend( ) );

    for( int i = 0 ; i < nums1.size( ) ; i++ ) {
      for( int j = 0 ; j < nums2.size( ) ; j++) {
        if( nums1[i] == nums2[j] ) {
          retVector.push_back( nums2[j] );
          nums2.erase( nums2.begin( ) + j);
          break;
        }
      }
    }

    return( retVector );
  }
};
