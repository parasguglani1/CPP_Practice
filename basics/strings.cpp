#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* char str[50];
    char str2[50];
    cin.get(str,50);
    string str1;
    cin.ignore();
    // used to ignore the newline character otherwise \n will be considered as part of the string 2
    // or we can use cin.getline(str,50);

    //getline (cin,str); // this is used to get the whole line for the string object
    //cin.getline(str,50); // this is used to get the whole line for char array
    cout<<str<<endl;
    cin.get(str2,50);
    // all strings are terminated by \0 but they do not appear in string length
    // so we can use strlen() to find the length of the string
    cout<<"The length of the string is "<<strlen(str)<<endl;
    //sizeof(str) is the size of the string in bytes
    cout<<"The size of the string is "<<sizeof(str)<<endl;

    cout<<strcat(str,str2)<<endl;
    // this is used to concatenate the strings
    //str2 is appended to str and the result is stored in str

    cout<<strncat(str,str2,5)<<endl;
    // this is used to concatenate the strings but only 5 characters are appended

    strcpy(str,str2);


    // this is used to copy the string str2 to str
    strncpy(str,str2,5);
    // this is used to copy the string str2 to str but only 5 characters are copied
     */
    char s1[50] = "hello";
    char s2[50] = "Hello";
    // cout<<strstr(s1,s2)<<endl;
    // this is used to find the first occurence of the string s2 in s1
    // if s2 is not found then it returns NULL
    // if s2 is found then it returns the address of the first occurence of s2 in s1 and alphabets after that
    // if s2 is not found then it returns the address of the first character of s1

    // cout<<strchr(s1,'l')<<endl;
    // this is used to find the first occurence of the character 'e' in s1
    // if 'e' is not found then it returns NULL
    // if 'e' is found then it returns the address of the first occurence of 'e' in s1 and alphabets after that
    // if 'e' is not found then it returns the address of the first character of s1

    // cout<<strrchr(s1,'l')<<endl;
    // this is used to find the last occurence of the character 'e' in s1
    // if 'e' is not found then it returns NULL
    // if 'e' is found then it returns the address of the last occurence of 'e' in s1 and alphabets after that
    // if 'e' is not found then it returns the address of the last character of s1

    cout << strcmp(s2, s1) << endl;
    // this is used to compare the strings s1 and s2
    // if s1 is greater than s2 then it returns 1
    // if s1 is less than s2 then it returns -1
    // if s1 is equal to s2 then it returns 0
    // lowercase and uppercase are considered as different characters
    // lowercase is considered as greater than uppercase

    string st1 = "10";
    string st2 = "20";
    cout << st1 + st2 << endl;
    // this is used to concatenate the strings

    // to datatypes

    // cout<<stoi(st1)+101<<endl;
    // this is used to convert the string to integer
    // if the string is not a valid integer then it returns 0
    // cout<<stol(st1)+101<<endl;
    // this is used to convert the string to long integer
    // if the string is not a valid long integer then it returns 0
    // cout<<stoll(st1)+101<<endl;
    // this is used to convert the string to long long integer
    // if the string is not a valid long long integer then it returns 0
    // cout<<stoul(st1)+101<<endl;
    // this is used to convert the string to unsigned long integer
    // if the string is not a valid unsigned long integer then it returns 0
    // cout<<stoull(st1)+101<<endl;
    // this is used to convert the string to unsigned long long integer
    // if the string is not a valid unsigned long long integer then it returns 0
    // cout<<stod(st1)+101<<endl;
    // this is used to convert the string to double
    // if the string is not a valid double then it returns 0
    // cout<<stof(st1)+101<<endl;
    // this is used to convert the string to float
    // if the string is not a valid float then it returns 0
    // cout<<stold(st1)+101<<endl;
    // this is used to convert the string to long double
    // if the string is not a valid long double then it returns 0

    // they can take more than one argument
    //  cout<<stoi(st1,NULL,10)+101<<endl;
    // NULL is used to specify the end of the string and 10 is the base

    // to string
    // cout<<to_string(10.5)<<endl;
    // this is used to convert the integer to string

    // tokenizing

    char string1[20] = "x=10;y=20;z=30";
    char *token;
    token = strtok(string1, "=;");
    // this is used to tokenize the string
    // it takes the string and the delimiter
    // it returns the address of the first token
    // it returns NULL if the string is empty or if the delimiter is not found

    while (token != NULL)
    {
        cout << token << endl;
        token = strtok(NULL, "=;");
    }

    return 0;
}