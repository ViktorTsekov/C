#!/bin/bash
gcc -Wall -Wextra -Werror -o  linecount linecount.c
cat file | ./linecount
