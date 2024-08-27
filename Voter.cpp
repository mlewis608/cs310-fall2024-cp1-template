#include <iostream>
#include <stdlib.h>
using namespace std;

class Voter {
   public:
      Voter(string firstname, string lastname, unsigned int voterage) {
         first = firstname;
	 last = lastname;
	 age = voterage;
      }

      Voter() {
         first = "";
         first = "";
         age = 0;
      }

      void show() {
         cout << last << ", " << first << ": " << age << endl;
      }

   private:
      string first = "";
      string last = "";
      unsigned int age = 0;
};

int main(int argc, char *argv[]) {
   Voter one;
   Voter *two = new Voter("Silly", "Sally", 17);
   one.show();
   two->show();
   delete(two);
}
