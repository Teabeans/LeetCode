class Solution {
public:
  int uniqueMorseRepresentations(vector<string>& words) {
    if ( words.size( ) == 0 ) {
      return( 0 );
    }

    string morsecode[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    string test = "abcd";
    stringstream transformer;

//    cout << transformer.str();
      
      
      
      
    for( int i = 0 ; i < words.size() ; i++ ) {
      string currword = words[i];
      stringstream transformer;
      for( int j = 0 ; j < currword.length() ; j++ ) {
        int lookup = (int)currword.at(j) - 97;
//        cout << lookup;
        transformer << morsecode[ lookup ];
      }
      words[i] = transformer.str();
//      cout << words[i] << endl;
    }

    sort( words.begin( ), words.end( ) );
//    for( int i = 0 ; i < words.size( ) ; i++ ) {
//      cout << words[i] << endl;
//    }


    int newcounter = 1;
    int lastUnique = 0;
    int currWord = 0;
    
    while( currWord < words.size( ) ) {
      if( words[lastUnique] == words[currWord] ) {
        // Do nothing, this is a duplicate
      }
      else if ( words[lastUnique] != words[currWord] ) {
        lastUnique = currWord;
        newcounter++;
      }

      currWord++;
    }


    return( newcounter );
  } // Closing uniqueMorseRepresentations( )
};
