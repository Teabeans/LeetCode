class Solution {
public:
  int reverse(int x) {

    // This is actually a problem regarding INT_MIN, INT_MAX, and overflow far moreso than it is numeric reversal
    // Edge cases will form the majority of the following code logic

    int magnitude = 0;
    int record[10];
    bool isNegative = false;
      
    int intMax[ 10 ] = {2,1,4,7,4,8,3,6,4,7};
    int intMin[ 10 ] = {2,1,4,7,4,8,3,6,4,8};
    
    // Initial check for 0 input
    if( x == 0 ) {
      return( 0 );
    }

    // Initial check for negativity
    if( x < 0 ) {
      isNegative = true;
    }

    while( x != 0 ) {
      record[magnitude] = abs( x % 10 ); // The '5' of -1,234,512,345
      magnitude++;
      x = x / 10; // -123,451,234
    } // Array populated
    // 0  1  2  3  4  5  6  7  8  9
    // 5  4  3  2  1  5  4  3  2  1

    // cout << "IsNegative: " << isNegative << endl;
    // for( int i = 0 ; i < magnitude ; i++ ) {
    //   cout << i << " : " << record[i] << endl;
    // }

    // Check for overflow
    if( magnitude == 10 ) {
      //cout << "Magnitude prereq met: Overflow checking..." << endl;
    //         0  1  2  3  4  5  6  7  8  9
    // Record: 5  4  3  2  1  5  4  3  2  1
    // intMax: 2  1  4  7  4  8  3  6  4  7
    // intMin: 2  1  4  7  4  8  3  6  4  8
      if( isNegative ) {
        // Toggle the last digit of INT_MAX from 7 to 8 (214783647 vs -214783648)
        intMax[9] = intMin[9];
      }

      for( int i = 0 ; i < 10 ; i++ ) {
        if( record[i] == intMax[i] ) {
          // Do nothing, we must continue checking
        }
        else if( record[i] > intMax[i] ) {
          // Overflow will occur
          // cout << "Overflow identified: " << i << " : " << record[i] << " : " << intMax[i];
          return( 0 );
        }
        else if( record[i] < intMax[i] ) {
          // Stop checking, overflow will not occur
          break;
        }
      }
    }

    // Overflow check completed - Compile number
    int retVal = 0;
    if (isNegative) {
      for( int i = 0 ; i < magnitude ; i++ ) {
        record[i] = record[i] * -1;
      }
    }
    for( int i = 0 ; i < magnitude ; i++ ) {
      retVal = ( retVal * 10 ) + record[ i ];
    }
    // cout << "Retval: " << retVal << endl;

    return( retVal );
  }
};
