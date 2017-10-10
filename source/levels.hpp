#ifndef levels_hpp
#define levels_hpp

#include <iostream>
#include <cstdlib>
#include "randomnum.hpp"
#include "styling.hpp"
#include <string>
int level_template(int rend, string lvl, int tries){
    int randomnum = randnum(rend);
    string lvli = lvl;
    int i;
    string lvlheader = "WELCOME TO LEVEL " + lvli;
    string lvlstarter = getstyledtext("33", "4", lvlheader);
    cout << "**********************" << endl;
    cout << lvlstarter << endl;
    cout << "**********************" << endl;
    for(i=tries;i > 0;i = i - 1){
	int guess;
	string promptext = "Your guess: ";
	string coloredprompt = getstyledtext("36", "1", promptext);
	cout << coloredprompt;
	cin >> guess;
	if(guess > randomnum){
           string answer = getstyledtext("31", "1", "Too high!");
	   cout << answer << endl;
	}
	else if(guess < randomnum){
	   string answer = getstyledtext("31", "1", "Too low!");
           cout << answer << endl;
	}
	else if(guess == randomnum){
	   string answer = getstyledtext("32", "1", "Correct!!");
           cout << answer << endl;
	   break;
	}
	else if(guess == 0){
	   string response = getstyledtext("31", "1", "No correct input!");
	   cout << response << endl;
	}
	else if(guess > rend){
	   string response = getstyledtext("31", "1", "No correct input!");
           cout << response << endl;
	}
	else{
	   string response = getstyledtext("31", "1", "No correct input!");
           cout << response << endl;
	}

    }
    return 0;
}
#endif
