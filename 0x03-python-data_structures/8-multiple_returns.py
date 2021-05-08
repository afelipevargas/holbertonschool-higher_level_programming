#!/usr/bin/python3
def multiple_returns(sentence):
    size = len(sentence)
    if size == 0:
        return (size, None)
    else:
        return (size, sentence[0])
