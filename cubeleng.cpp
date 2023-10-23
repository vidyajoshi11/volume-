#include <iostream>
using namespace std;

int solve( int k ) {
   int volume;
   volume = k * k * k;
   return volume;
}
int main() {
   cout << "Volume of a cube with side length k = 5 cm, is " <<
   solve( 5 ) << " cm^3" << endl;
   cout << "Volume of a cube with side length k = 2 m, is " << solve( 2 ) << " m^3" << endl;
   cout << "Volume of a cube with side length k = 25 in, is " <<
   solve( 25 ) << " in^3" << endl;
}
