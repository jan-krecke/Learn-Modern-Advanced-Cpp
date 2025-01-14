#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  ifstream ifile{
      "text.txt"};  // Define ifile as an ifstream variable bound to text.txt

  if (ifile) {
    string text{""};
    while (getline(ifile, text)) {  // Read a word from the file
      cout << text << endl;
    }

    ifile.close();  // Release the binding between ifile and text.txt
  }
}