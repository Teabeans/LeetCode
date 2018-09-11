class Solution {
public:
  bool judgeCircle(string moves) {
    int xCoord = 0;
    int yCoord = 0;

    for( int i = 0 ; i < moves.length() ; i++ ) {
      if( moves.at( i ) == 'U' ) {
        yCoord++;
      }
      else if( moves.at( i ) == 'D' ) {
        yCoord--;
      }
      else if( moves.at( i ) == 'R' ) {
        xCoord++;
      }
      else if( moves.at( i ) == 'L' ) {
        xCoord--;
      }
    } // All inputs processed
    
    if( xCoord != 0 || yCoord != 0 ) {
      return( false );
    }
    return( true );

  }

};
