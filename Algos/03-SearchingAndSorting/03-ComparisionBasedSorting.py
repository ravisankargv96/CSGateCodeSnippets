# Selection Sort
def selectionSort(arr, n):

    for i in range(n-1):

        min_idx = i

        #Select the least element in the array
        for j in range(i+1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j
        
        # Place the least element in i_th position & move forward.
        arr[i], arr[min_idx] = arr[min_idx], arr[i]


# Bubble Sort
def bubbleSort(arr, n):

    for i in range(0, n):

        swapped = False
        for j in range(0, n-1 - i): # Highest element is bubble Here
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                swapped = True
        
        if swapped == False:
            break

# Printing Purpose
def output(msg, arr, n):
    print(msg)
    for i in range(n):
        print(f"{arr[i]}", end = " ")
    print("")

if __name__ == "__main__":
    arr = [12, 11, 13, 5, 6, 7]
    n = len(arr)

    output("Given array :", arr, n)

    # selectionSort(arr,n)
    # output("After SelectionSort:", arr, n)

    bubbleSort(arr,n)
    output("After BubbleSort: ", arr, n)