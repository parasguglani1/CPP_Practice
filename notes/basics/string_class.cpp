#include <bits/stdc++.h>
using namespace std;
int main(){
// cout<<"hello world"<<endl;
string s1="hello world";
string s2="world";
string s3=s1+s2;
s1=s1+s2;
// cout<<s3<<endl;
// cout<<s1.length()<<endl;
// cout<<s1.size()<<endl;
//both are same

// cout<<s1.capacity()<<endl;
//current capacity of string

// s1.reserve(100);
//reserve memory for string


// s1.resize(10);
//resize capacity to 10 or more and add '\0'

// s1.clear();
// s1.erase(0,2);
//clear the string

// cout<<s1.empty()<<endl;
//check if string is empty

// cout<<s1.max_size()<<endl;
//maximum size of string can be stored

// s1.append("hello");
//add string to string
// s1.insert(0,"hello");
//insert string at index 0
// s1.insert(s1.size(),"hello");
//insert string at end
// s1.insert(s1.size(),"hello",2);
//insert string at end with length 2

// s1.replace(0,2,"hello");
//replace string at index 0 with length 2
// cout<<s1<<endl;
// s1.replace(0,2,"ParasG",5);
// cout<<s1<<endl;
//replace string at index 0 of length 2 with a string of length 5
// s1.push_back('P');
//add character at end
// s1.pop_back();
//remove character at end
// s1.swap(s2);
//swap string
// cout<<s1<<endl;
// cout<<s2<<endl;
// char s4[100];
// s1.copy(s4,3);
//copy string to char array
// cout<<s4<<endl;
// s4[3]='\0';
// cout<<s4<<endl;
//copy string to char array with length 3

// cout<<"string is " <<s1<<endl;

// cout<<s1.find("llo")<<endl;
//find string
// cout<<s1.rfind("llo")<<endl;
//find string from end
//these search for individual letters not whole words  i.e. either r or w whichever is found first
// cout<<s1.find_first_of("rw",3)<<endl;
//find first occurence of string from index 3
// cout<<s1.find_last_of("hello")<<endl;
//find last occurence of string
// cout<<s1.find_first_not_of("hello")<<endl;
//find first occurence of string not in string
// cout<<s1.find_last_not_of("hello")<<endl;
//find last occurence of string not in string

string str="programming";
// string str1="zrogramming";
// cout<<str.substr(3,4)<<endl;
//substring from index 3 of length 4

// cout<<str.compare(str1)<<endl;
//compare string

//operators

// cout<<str.at(3)<<endl;
//access character at index 3
// cout<<str.back()<<endl;
//access last character
// cout<<str.front()<<endl;
//access first character
// str[5]= 'z';
//replace character at index 5
cout<<str<<endl;

//iterators


for(string::iterator itr=str.begin();itr!=str.end();itr++)
{
    *itr=*itr-32;
    
}
cout<<str<<endl;

//reverse iterator

for(string::reverse_iterator itr=str.rbegin();itr!=str.rend();itr++)
{
    // *itr=*itr-32;
    cout<<*itr<<endl;   
}
cout<<str<<endl;

// we can use simple for loop as well
for (int i = 0; i < str[i]!='\0'; i++)
{
    cout<<str[i]<<endl;
}


return 0;
}   