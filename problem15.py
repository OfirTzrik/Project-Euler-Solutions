import math

# Mark step right as R and step down as D
# This problem describes the number of possible ways to order 20 Rs and 20 Ds without repititions
num_paths = math.factorial(40) / (math.factorial(20) * math.factorial(20))
print(num_paths)