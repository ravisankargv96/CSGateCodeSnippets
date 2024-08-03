# Counting Sort

def count_sort(input_array):
	# Finding the maximum element of input_array.
	M = max(input_array)

	# Initializing count_array with 0
	count_array = [0] * (M + 1)

	# Mapping each element of input_array as an index of count_array
	for num in input_array:
		count_array[num] += 1

	# Calculating prefix sum at every index of count_array
	for i in range(1, M + 1):
		count_array[i] += count_array[i - 1]

	# Creating output_array from count_array
	output_array = [0] * len(input_array)

	for i in range(len(input_array) - 1, -1, -1):
		output_array[count_array[input_array[i]] - 1] = input_array[i]
		count_array[input_array[i]] -= 1

	return output_array

# Driver code
if __name__ == "__main__":
	# Input array
	input_array = [4, 3, 12, 1, 5, 5, 3, 9]

	# Output array
	output_array = count_sort(input_array)

	for num in output_array:
		print(num, end=" ")


# Radix Sort

# Python program for implementation of Radix Sort
# A function to do counting sort of arr[] according to
# the digit represented by exp.


def countingSort(arr, exp1):

    n = len(arr)

    # The output array elements that will have sorted arr
    output = [0] * (n)

    # initialize count array as 0
    count = [0] * (10)

    # Store count of occurrences in count[]
    for i in range(0, n):
        index = arr[i] // exp1
        count[index % 10] += 1

    # Change count[i] so that count[i] now contains actual
    # position of this digit in output array
    for i in range(1, 10):
        count[i] += count[i - 1]

    # Build the output array
    i = n - 1
    while i >= 0:
        index = arr[i] // exp1
        output[count[index % 10] - 1] = arr[i]
        count[index % 10] -= 1
        i -= 1

    # Copying the output array to arr[],
    # so that arr now contains sorted numbers
    i = 0
    for i in range(0, len(arr)):
        arr[i] = output[i]

# Method to do Radix Sort


def radixSort(arr):

    # Find the maximum number to know number of digits
    max1 = max(arr)

    # Do counting sort for every digit. Note that instead
    # of passing digit number, exp is passed. exp is 10^i
    # where i is current digit number
    exp = 1
    while max1 / exp >= 1:
        countingSort(arr, exp)
        exp *= 10


# Driver code
arr = [170, 45, 75, 90, 802, 24, 2, 66]

# Function Call
radixSort(arr)

for i in range(len(arr)):
    print(arr[i], end=" ")

# This code is contributed by Mohit Kumra
# Edited by Patrick Gallagher
