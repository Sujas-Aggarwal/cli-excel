#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Utils
{
public:
    static void clearScreen();
    static void pause();
    static void displayError(const string &message);
    static void displaySuccess(const string &message);
    static void displayInfo(const string &message);
    static void displayWarning(const string &message);
    static void displayDebug(const string &message);
    static string convertRowToString(int row);
    static string paddedText(const string &text, int width = 10, char fillChar = ' ');
};