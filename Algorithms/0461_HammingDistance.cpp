#include <bitset>

class Solution {
public:
  int hammingDistance(int x, int y) {
    int counter = 0;
    bitset<32> bitX(x);
    bitset<32> bitY(y);

    for( int i = 0 ; i < 32 ; i++ ) {
      if( bitX[i] != bitY[i] ) {
        counter++;
      }
    }

    return( counter );
  }
};
