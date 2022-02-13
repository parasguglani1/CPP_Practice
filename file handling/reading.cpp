#include <iostream>
#include <fstream>
using namespace std;

/*program for reading a file

*/
int main()
{
    ifstream ifs;
    ifs.open("my.txt");
    if (ifs.is_open())
        cout << "file is opened" << endl;
    string name;
    int roll;
    string branch;
    ifs >> name >> roll >> branch;
    if(ifs.eof())
        cout << "end of file" << endl;
    ifs.close();

    cout << "name" << name << endl;
    cout << "roll" << roll << endl;
    cout << "branch" << branch << endl;
}