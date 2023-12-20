#!/usr/bin/python3
"""returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    per = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    per += 1
                if j == cols - 1 or grid[i][j + 1] == 0:
                    per += 1
                if i == rows - 1 or grid[i + 1][j] == 0:
                    per += 1
                if j == 0 or grid[i][j - 1] == 0:
                    per += 1

    return per
