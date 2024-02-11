/*
Team Member 1: Paul De Palma
Course: CPSC 122
Date Submitted: 2/10/2024
Assignment Name: Project 4 
Description Program reads an unsorted file of strings.  Sorts it. Writes it out 
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void control(string input, string output, int numLines);
int countLines(string input);
//Put adapted function declarations for selection sort here 
//--selecton sort
//--find_small
//--swap

int main(int argc, char* argv[])
{
 if (argc != 3) 
 {
    cout << "Incorrect number of command line arguments" << endl;
    exit(1);
 }

 string input = argv[1];
 string output = argv[2];

 int numLines = countLines(input);
 control(input, output, numLines);

 return 0;
}

int countLines(string input)
{
}


/*
Description; 
1 Opens input file for reading and outfile for writing.  
2 Dynamically declares a string array if size numLines 
3 Reads input file into string array
4 Calls selection sort to sort string array
5 Writes sorted file to output
Input: input file name, output file name, length of input file 
Output: wrties sorted array to output file 
*/
void control(string input, string output, int numLines)
{
}

//code for selection_sort goes here
//code for find_small goes here
//code for swap goes here
