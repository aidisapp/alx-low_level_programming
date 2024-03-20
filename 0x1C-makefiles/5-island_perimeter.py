#!/usr/bin/python3
"""This is the definition of a function to compute the perimeter of an island."""


def calculate_island_perimeter(grid):
    """
    This is the function that computes the perimeter of the island based on the provided grid.

    Args:
    - grid (list of list of integers): Represents the island grid where:
        - 0 indicates a water zone
        - 1 indicates a land zone

    Returns:
    - int: The perimeter of the island
    """
    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                perimeter += 4
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2
    return perimeter
