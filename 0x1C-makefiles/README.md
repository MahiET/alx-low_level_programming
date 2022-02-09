# 0x1C. C - Makefiles

Make is Unix utility that is designed to start execution of a makefile. A makefile is a special file, containing shell commands, that you create and name makefile (or Makefile depending upon the system). While in the directory containing this makefile, you will type make and the commands in the makefile will be executed. If you create more than one makefile, be certain you are in the correct directory before typing make.

As a makefile is a list of shell commands, it must be written for the shell which will process the makefile. A makefile that works well in one shell may not execute properly in another shell.The makefile contains a list of rules. These rules tell the system what commands you want to be executed.

What is a Makefile and how does it work?
=

If you want to run or update a task when certain files are updated, the make utility can come in handy. The make utility requires a file, Makefile (or makefile), which defines set of tasks to be executed. You may have used make to compile a program from source code. Most open source projects use make to compile a final executable binary, which can then be installed using make install.

examples

say_hello:
        echo "Hello World"

               $ make

                  echo "Hello World"

                       Hello World
