/**************************************************
 * Name: Evan Walsh
 * Class: CS4000
 * Professor: Ostermann
 * ************************************************/



#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line 
//program: ./filesize
// input.3lines: 3
// input.1line: 1
//
int main( int argc, char* argv[] )
{   
    cout << "program: " << argv[0] << endl;
    // just to get you started, this is how to refer to the arguments that were passed
    for (int arg = 1; arg < argc; ++arg){
            //std::cout << "argv[" << arg << "]: " << argv[arg] << '\n' ;
        ifstream input; //Reads in file
        input.open(argv[arg]); //opens file
        if(input){
            int line_count = 0; //Sets count to 0
            string s;
            while(input){
                getline(input, s);
                line_count++; //increments count by 1
            }
        
            cout << " " << argv[arg] << ": " << line_count -1 << endl; //prints out each argument and the # of lines it has
        }else{
            cout << " " << argv[arg] << ": -1" << endl; //prints out -1 if the file can not be open
        }
    }
    
    exit(0); // this means that the program executed correctly!
}
