#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    size = (len(sys.argv) - 1)
    index = 1
    sum = 0
    while index < size:
        sum += int(sys.argv[index])
        index += 1
    print('{:d}'.format(sum))
