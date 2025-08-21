#!/bin/bash
# LeetCode 192: Word Frequency
# Given a text file words.txt, count frequency of each word and
# print them sorted by descending frequency.

cat words.txt | tr -s ' ' '\n' | sort | uniq -c | sort -nr | awk '{print $2, $1}'
