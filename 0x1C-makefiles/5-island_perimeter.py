#!/usr/bin/python3
'# returns the perimeter of the island described in grid'


def island_perimeter(grid):
    '# returns the perimeter of the island described in grid'
    x = 2;
    for lis in grid:
        for i in lis:
            if i == 1:
                x += 2
    return x
