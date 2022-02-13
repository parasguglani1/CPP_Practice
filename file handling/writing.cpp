/* Streams
• I/O Streams are used for input and output data to and from the program
• C++ provides class for accessing input output operations
• Iostream is a base class for all classes
• Istream is for input
• Cin is the object of istream
• ostream is for output
• Cout is an object of ostream
•
• ifstream is a file input stream
• ofstream is a file output stream
 */

# include<iostream>
# include<fstream>
using namespace std;
     
/*program for writing a file

*/
int main()
{
	// ofstream ofs("my.text",ios::trunc); //ios::trunc is used to overwrite the file
    ofstream ofs("my.txt",ios::trunc); //ios::app is used to append the file
	ofs<<"john"<<endl;
	ofs<<25<<endl;
	ofs<<"cs"<<endl;
	ofs.close();
}