#!/usr/bin/python3
for letter in range(97, 122 + 1):
    if letter != 101 and letter != 113:
        print('{:c}'.format(letter), end='')
