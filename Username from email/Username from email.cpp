// Username from email.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::string str, name = "";

    std::cout << "Enter a fill email\n";
    std::cin >> str;

    int len = (int)str.length();

    name.resize(len);

    for (int i = 0; i < len; i++) {
        if (str[i] == '@')
            break;
        else
            name[i] = str[i];
    }

    std::cout << "Username from email is: " << name << std::endl;

    return 0;
}


