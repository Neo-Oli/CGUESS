#ifndef styling_hpp
#define styling_hpp
#include <iostream>
#include <cstdlib>
using namespace std;
string getstyledtext(string color, string style, string mystring){
	string styledtext;
	styledtext = "\033[" + style + ";" + color + "m" + mystring + "\033[0m";
	return styledtext;
}

#endif
