#!/bin/bash

make re > /dev/null

printf "valid replace executions\n"
printf "./replace Makefile pramella not_pramella\n"
printf "./replace test.txt kek topkek\n"
./replace Makefile pramella not_pramella
./replace test.txt kek topkek

printf "\nempty string arg test\n"
./replace "" s1 s2
./replace filename "" s2
./replace filename s1 ""
printf "\nnon existing file\n"
./replace blabla s1 s2

less Makefile.REPLACE
less test.txt.REPLACE
