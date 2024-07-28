def merge(arr, low, mid, high):
    n1 = mid - low + 1
    n2 = high - mid

    # create temp arrays
    Left = [0] * (n1)
    Right = [0] * (n2)

    # Left[] = arr[low: mid]
    for i in range(0, n1): 
        Left[i] = arr[low + i]

    # Right[] = arr[mid+1 : high]
    for j in range(0, n2):
        Right[j] = arr[mid+1 + j]
    
    # Merge temp arrays back into arr[low...high]
    i, j, k = 0, 0, low 
    
    while i < n1 and j < n2:
        # Least element will appead to arr..
        if Left[i] <= Right[j]:
            arr[k] = Left[i]
            i += 1
        else:
            arr[k] = Right[j]
            j += 1
        k += 1
    
    # Copy the remaining elements of Left[], if there are any
    while i < n1:
        arr[k] = Left[i]
        i += 1
        k += 1
    
    # Copy the remaining elements of Right[], if there are any
    while j < n2:
        arr[k] = Right[j]
        j += 1
        k += 1

def divide(arr, low, high):
    if low < high: # len(arr) > 1
        # (low + high)//2 creates overflow in many programming languages other than python    
        mid = low + (high - low)//2 

        divide(arr, low, mid)
        divide(arr, mid+1, high)
        
        merge(arr, low, mid, high)

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
    output("After MergeSort", arr, n)

