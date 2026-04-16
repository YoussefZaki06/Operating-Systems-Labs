#!/bin/bash

Name=$1
ID=$2
DIR="assignment_$ID"

mkdir -p "$DIR" 
echo "Directory $DIR created"

echo "Student Name: $Name" > "$DIR/info_$ID.txt"
echo "student ID: $ID" >> "$DIR/info_$ID.txt"
echo "Course: Operating Systems" >> "$DIR/info_$ID.txt"


echo "Current User: $(whoami)" > "$DIR/system_$ID.txt"
echo "Current Date: $(date)" >> "$DIR/system_$ID.txt"
echo "Current Directory: $(pwd)" >> "$DIR/system_$ID.txt"
echo "Number of Running Processes: $(ps -e | wc -l)" >> "$DIR/system_$ID.txt"

echo "Hello I am $Name(ID: $ID)." > "$DIR/message_$ID.txt"
echo "This assignment demonstrates process creation using fork()." >> "$DIR/message_$ID.txt"
echo "and program execution using exec() in Linux." >> "$DIR/message_$ID.txt"
echo "The script was excecuted successfully by my C program." >> "$DIR/message_$ID.txt"

echo "Files generated successfully"

