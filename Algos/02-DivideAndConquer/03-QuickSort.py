def partition(arr, low, high):

    pivot = arr[high]
    i = low - 1

    for j in range(low, high):
        if arr[j] < pivot:  #Make sure i_th position keeps inserting ele < pivot
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
    
    arr[i+1], arr[high] = arr[high], arr[i+1]
    return i+1


def divide(arr, low, high):
    if low < high: # len(arr) > 1
        pi = partition(arr, low, high)
        divide(arr, low, pi-1) # elements < arr[pi]
        divide(arr, pi + 1, high) # elements > arr[pi]


# Printing Purpose
def output(msg, arr, n):
    print(msg)
    for i in range(n):
        print(f"{arr[i]}", end = " ")
    print("")

if __name__ == "__main__":
    arr = [12, 11, 13, 5, 6, 7]
    n = len(arr)
    output("Given array is", arr, n)
    
    divide(arr, 0, n-1)
    output("After QuickSort", arr, n)

