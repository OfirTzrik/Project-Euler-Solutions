import math

# Mark step right as R and step down as D
# This problem describes the number of possible ways to order 20 Rs and 20 Ds without repititions
size_x = 20
size_y = 20

num_paths = math.factorial(size_x + size_y) / (math.factorial(size_x) * math.factorial(size_y))
print(num_paths)