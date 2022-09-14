#!/usr/bin/python3
"""Island perimeter measuring module"""


def island_perimeter(grid):
    """A function that measure island perimeter"""
    width = len(grid[0])
    height = len(grid)
    size = 0
    edge = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1]) == 1:
                    edge += 1
                if (i > 0 and grid[i - 1][j]) == 1:
                    edge += 1
    return size * 4 - edge * 2
