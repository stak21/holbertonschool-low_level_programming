#!/usr/bin/python3
""" Function: island_perimeter """


def island_perimeter(grid):
    """ Returns the perimeter of the island """
    perimeter = 0
    for row in range(len(grid)):
        for element in range(len(grid[row])):
            if grid[row][element] is 1:
                perimeter += 4
                try:
                    if grid[row][element - 1] is 1:
                        perimeter -= 1
                except Exception:
                    pass
                try:
                    if grid[row][element + 1] is 1:
                        perimeter -= 1
                except Exception:
                    pass
                try:
                    if grid[row - 1][element] is 1:
                        perimeter -= 1
                except Exception:
                    pass
                try:
                    if grid[row + 1][element] is 1:
                        perimeter -= 1
                except Exception:
                    pass

    return perimeter
