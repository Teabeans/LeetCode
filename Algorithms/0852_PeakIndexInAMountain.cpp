class Solution {
public:
  int peakIndexInMountainArray(vector<int>& A) {
    int curr = 0;
    while( A[ curr ] < A[ curr+1 ] ) {
      curr++;
    }
    return( curr );
  }
};
