#!/usr/bin/python3
'# returns the perimeter of the island described in grid'


def island_perimeter(grid):
    '# returns the perimeter of the island described in grid'
    x = 0;
    flag = 1
    for lis in range(len(grid)):
        for i in range(len(grid[lis])):
            if flag == 0 and grid[lis][i] == 1:
                if grid[lis][i] == 1:
                    x += 2
                if grid[lis - 1][i] == 1 and grid[lis][i + 1] == 1 and grid[lis + 1][i] == 1:
                    x -= 1
            if grid[lis][i] == 1 and flag == 1:
                x = 4
                flag = 0
    return x
