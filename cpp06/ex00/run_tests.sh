#!/bin/bash

for val in 0 nan nanf 42.0f a z "!" 0 42 -42 3.14  2.718f -0.001; do
	echo "------------"
	echo "---> $val"
    ./convert "$val"
done





