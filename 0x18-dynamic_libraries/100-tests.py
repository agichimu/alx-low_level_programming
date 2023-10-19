import ctypes

# Load the dynamic library
operations = ctypes.CDLL('./100-operations.so')

# Call C functions from the library
result = operations.add(9, 8)
print(f"9 + 8 = {result}")

result = operations.sub(9, 8)
print(f"9 - 8 = {result}")
