#include <iostream>
using namespace std;

int main() {

 setlocale(LC_ALL, "ua");

for (int i = 1; i <= 100; i++) {

    if (i % 15 == 0) {

      cout << "ТРИП'ЯТЬ\n";

    } else if (i % 5 == 0) {

      cout << "П'ЯТЬ\n";

    } else if (i % 3 == 0) {

      cout << "ТРИ\n";

    } else {
      
       cout << i << "\n";

    }
  }
 
  return 0;
}
