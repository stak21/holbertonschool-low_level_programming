#!/usr/bin/python3
""" Function: island_perimeter """


def island_perimeter(grid):
    """ Returns the perimeter of the island """
    perimeter = 0

    if grid is None or not isinstance(grid, list):
        return 0
    for row in range(len(grid)):
        for element in range(len(grid[row])):
            if grid[row][element] is 1:
                perimeter += 4
                try:
                    if element - 1 < 0:
                        pass
                    elif grid[row][element - 1] == 1:
                        perimeter -= 1
                except Exception:
                    pass
                try:
                    if grid[row][element + 1] == 1:
                        perimeter -= 1
                except Exception:
                    pass
                try:
                    if row - 1 < 0:
                        pass
                    elif grid[row - 1][element] == 1:
                        perimeter -= 1
                except Exception:
                    pass
                try:
                    if row + 1 >= len(grid):
                        pass
                    elif grid[row + 1][element] == 1:
                        perimeter -= 1
                except Exception:
                    pass

    return perimeter
