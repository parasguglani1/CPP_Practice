        #include <bits/stdc++.h>
        using namespace std;
        int main()
        {

            // int a=10;
            // int* p=&a;
            // cout<<"a="<<a<<endl;
            // cout<<"p="<<p<<endl;
            // cout<<"*p="<<*p<<endl;
            // *p=20;
            // cout<<"a="<<a<<endl;

            // & is the address of operator
            // * is the dereference operator or data operator
            int PA[5] = {9403, 9505, 3, 4, 5};
            int *ptr = PA;
            //  *ptr2 = &PA[4];
            // cout << ptr2 - ptr << endl;
            // cout << ptr << endl;
            // cout << *ptr << endl;
            // cout << (ptr + 1) << endl;
            // cout << *(ptr + 1) << endl;
            // cout << *(ptr + 2) << endl;
            // cout << ptr[2] << endl;
            // cout << ptr << endl;
            // cout << ++ptr << endl;
            // for (int i = 0; i < 5; i++)
            // {
            //     cout << i[PA] << endl;
            //     // cout << PA[i] << endl;
            // }
            // for (int i = 0; i < 5; i++)
            // {
            //     cout << ptr[i] << endl;
            //     cout << ptr << endl;
            // }
            // for (int i = 0; i < 5; i++)
            // {
            //     cout << *ptr << endl;
            //     ptr++;
            // }
            // cout << ptr << endl;
            *PA = 10;
            *ptr = 20;
            cout << *ptr << endl;
            cout << PA[0] << endl;

            return 0;
        }
