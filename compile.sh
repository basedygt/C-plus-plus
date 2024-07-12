#!/bin/bash

c++ $1 -o $2
./"$2"
rm "$2"