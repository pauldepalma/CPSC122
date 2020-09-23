/*
Class: CPSC 122-01
Paul De Palma
GU Username: depalma
Submitted By: Paul De Palma
GU Username: depalma
File Name: ex14.cpp
Program demonstrates that -x % n == -x + n % n
To Build: g++ ex14.cpp
To Execute: ./a.out x n 
*/

using namespace std;


int main(int argc, char* argv[])
{

 fin.close();
 fout.close();

 return 0;
}

/*
Pre:  file is a reference to an fstream object
      name of the physical name of a file
      mode is 'r' for input and 'w' for output
Post: file is opened, displays error and halts if error is encountered
*/ 
void fileOpen(fstream& file, char name[], char mode)
{
 string fileType;

 if (mode == 'r')
  fileType = "input";
 if (mode == 'w')
  fileType = "output";

 if (mode == 'r')
  file.open(name, ios::in);  //available thorugh fstream
 if (mode == 'w')
  file.open(name, ios::out);  //available through fstream;

 if (file.fail()) //error condition 
 {
  cout << "Error opening " << fileType << " file" << endl; 
  exit(EXIT_FAILURE);
 }
}

/*
Pre:  data is an array of strings, idx1 and idx2 are indices into the array
Post: what was in positon idx1 in now in position idx2 and vice-versa
*/
void swap(string data[], int idx1, int idx2)
{
 string tmp;
 tmp = data[idx1];
 data[idx1] = data[idx2];
 data[idx2] = tmp;
}


