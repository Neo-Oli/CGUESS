******
CGUESS
******

About
=====
CGUESS is a guessing game. It was written in C++ and has the following features:

- five levels of different levels of difficulty
- color coded output using ANSI escape sequences
- fast and light

GENERAL REQUIREMENTS
====================
You should have a terminal that can render ANSI escape sequences as colored text.


Usage
=====
Simply run the executable and run "help" when you see the CGUESS prompt popping up!

HELP
====
If you have any problems, drop me a line or open an issue here. My contact info can be found on my website!

LICENSING
=========
This software is licensed under the GNU GPL V3.0.
This software was written and conceived by Le Tigre and is owned by Vox by Le Tigre, Le Tigre's company.

Building
========
In order to build CGUESS from source, you should have the following programs installed on your system and available from the command line:

- CLANG
- MAKE
- GIT

After having installed those, execute these three commands and you are good to go!

.. code-block:: bash
    
    $ git clone http://github.com/cocodevienne/cguess
    $ cd cguess/source
    $ make

You are now done! You should now see a binary file called "cguess" in the source directory. Congrats! This file can now be executed!