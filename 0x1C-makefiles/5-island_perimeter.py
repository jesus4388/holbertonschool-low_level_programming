#!/usr/bin/python3
'# returns the perimeter of the island described in grid'


def island_perimeter(grid):
    '# returns the perimeter of the island described in grid'

    x = 0
    for lis in range(len(grid)):
        for i in range(len(grid[lis])):
            if grid[lis][i] == 1:
                x += 4
                if lis > 0:
                    if grid[lis-1][i] == 1:
                        x -= 2
                if i > 0:
                    if grid[lis][i - 1] == 1:
                        x -= 2
    return x
