#include <iostream>
#include <cstdlib>
#include "styling.hpp"
#include "randomnum.hpp"
#include "levels.hpp"

void help(){
     string helpmsg1 = getstyledtext("35", "1", "1. LEVEL 1");
     string helpmsg2 = getstyledtext("35", "1", "2. LEVEL 2");
     string helpmsg3 = getstyledtext("35", "1", "3. LEVEL 3");
     string helpmsg4 = getstyledtext("35", "1", "4. LEVEL 4");
     string helpmsg5 = getstyledtext("35", "1", "5. LEVEL 5");
     string helpmsg6 = getstyledtext("35", "1", "help -this help message");
     string helpmsg7 = getstyledtext("35", "1", "info -info about the program");
     string helpmsg8 = getstyledtext("35", "1", "end -  end program");
     cout << helpmsg1 << endl;
     cout << helpmsg2 << endl;
     cout << helpmsg3 << endl;
     cout << helpmsg4 << endl;
     cout << helpmsg5 << endl;
     cout << helpmsg6 << endl;
     cout << helpmsg7 << endl;
     cout << helpmsg8 << endl;
}

void info(){
    string info = "CGUESS by Le Tigre\nLicensed under the GNU GPL V3.0.";
    string coloredinfo = getstyledtext("33", "4", info);
    cout << coloredinfo << endl;
}

void errmsg(){
    string errmsg = getstyledtext("31", "1", "Wrong command!");
    cout << errmsg << endl;
}

int cguess(){
    string header = "***********************";
    string coloredheader = getstyledtext("35", "1", header);
    string mainheader = "CGUESS";
    string coloredmainheader = getstyledtext("34", "4", mainheader);
    cout << coloredheader << endl;
    cout << coloredmainheader << endl;
    cout << coloredheader << endl;
    string prompt = "cguess> ";
    string coloredprompt = getstyledtext("31", "1", prompt);
    string command;
    while(command != "end"){
	cout << coloredprompt;
	cin >> command;
        if(command == "help"){
	    help();
	    continue;
	}
	else if(command == "1"){
	    level_template(50,"1",10);
	    continue;
	}
	else if(command == "2"){
	    level_template(60,"2",8);
	    continue;
        }
	else if(command == "3"){
	    level_template(70,"3",7);
	    continue;
        }
	else if(command == "4"){
	    level_template(80,"4",6);
	    continue;
        }
	else if(command == "5"){
	    level_template(100,"5",5);
	    continue;
        }
	else if(command == "info"){
	    info();
	    continue;
	}
	else if(command == "end"){
	    exit(0);
	}
	else{
	    errmsg();
	}
    }
    return 0;
}

int main(){
    cguess();
    exit(0);
    return 0;
}
