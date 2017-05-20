#!/bin/bash

if [ $# -eq 0 ]
    then
        echo "No arguments supplied"
        exit
fi

if [ -z "$2" ]
    then
        echo "Not enough arguments supplied"
        exit
fi

CHAPTER=$1
EXERCISE=$2

DIR=$CHAPTER.$EXERCISE
FILE=$CHAPTER-$EXERCISE.c
mkdir $DIR
cp template.c $DIR/$FILE

cd $DIR
