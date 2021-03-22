#!/bin/bash
gcc -o naive naive.c | ./naive 10 1000 100
gcc -o binary naive.c | ./binary 10 1000 100
