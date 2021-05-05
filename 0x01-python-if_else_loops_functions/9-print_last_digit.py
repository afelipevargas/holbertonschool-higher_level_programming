#!/usr/bin/python3
def print_last_digit(number):
    if number < 0:
        digit = abs((number % -10))
        print(digit, end='')
        return digit
    elif number > 0:
        digit = (number % 10)
        print(digit, end='')
        return digit
    else:
        print(0, end='')
        return 0
