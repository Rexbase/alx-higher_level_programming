#!/usr/bin/python3
def weight_average(my_list=[]):
    if not my_list:
        return 0

    total_weight = sum(x * y for x, y in my_list)
    total_items = sum(y for _, y in my_list)
    
    if total_items == 0:
        return 0

    average = total_weight / total_items
    return average
