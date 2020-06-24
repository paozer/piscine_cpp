#!/bin/bash

make re > /dev/null

printf "valid replace executions\n"
printf "./replace Makefile pramella not_pramella\n"
printf "./replace test0.txt kek topkek\n"
printf "./replace test1.txt pramella pramella\n"
./replace Makefile pramella not_pramella
./replace test0.txt kek topkek
./replace test1.txt pramella pramella
printf "\ndiff Makefile\n"
diff Makefile Makefile.REPLACE
printf "\ndiff test0\n"
diff test0.txt test0.txt.REPLACE
printf "\ndiff test1\n"
diff test1.txt test1.txt.REPLACE

printf "\nempty string arg test\n"
./replace "" s1 s2
./replace filename "" s2
./replace filename s1 ""

printf "\nnon existing file\n"
./replace blabla s1 s2

make clean > /dev/null
