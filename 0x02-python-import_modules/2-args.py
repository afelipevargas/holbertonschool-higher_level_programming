#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    size = (len(sys.argv) - 1)
    if (size == 0):
        print('0 arguments.')
    else:
        index = 1
        print('{:d} arguments:'.format(size))
        while index < (len(sys.argv)):
            print('{:d}: {:s}'.format(index, sys.argv[index]))
            index += 1
