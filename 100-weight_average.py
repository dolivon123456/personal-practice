#!/usr/bin/python3
def weight_average(my_list=[]):
    if len(my_list) <= 0:
        return 0
    else:
        return sum(my_list / 2)
