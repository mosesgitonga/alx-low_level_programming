#!/usr/bin/python3
def island_perimeter(grid):
	"""
    Calculate the perimeter of the island described in the grid.
    
    Args:
        grid (list of list of int): A 2D grid representing the island and water zones.
        
    Returns:
        int: The perimeter of the island.
    """
	count = 0
	rows, col = len(grid), len(grid[0])
	for r in range(rows):
		for c in range(col):
			if grid[r][c] == 1:
				count += 4
				if r > 0 and grid[r - 1][c] == 1:
					count -= 2
				if c > 0 and grid[r][c - 1] == 1:
					count -= 2
	return count
