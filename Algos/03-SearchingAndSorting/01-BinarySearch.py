# Write Linear Search
def find(arr,num):
    for i in range(len(arr)):
        if arr[i] == num:
            return i

# Write Binary Search iteration method.
def binarySearch(arr, tar):
    low, high = 0, len(arr)-1

    while(low <= high):
        mid = (low + high)//2
        if arr[mid] == tar:
            return mid
        elif arr[mid] < tar:
            low = mid + 1
        else:
            high = mid - 1

# Write Binary Search Recursive method.
def binarySearch(arr, tar, low, high):
    if low > high:
        return -1
    
    mid = (low + high)//2
    if arr[mid] == tar:
        return mid
    elif arr[mid] < tar:
        return binarySearch(arr, tar, mid+1, high)
    else:
        return binarySearch(arr,tar, low, mid-1)
    

if __name__ == "__main__":
    arr = [2,5,8,12,16,23,38,56,72,91]
    tar = 23

    #linear
    print(f"Iterative method: ind of {tar}:{find(arr,tar)}")
    
    # binaryIterative
    print(f"Iterative method: ind of {tar}:{binarySearch(arr,tar)}")

    # binaryRecursive
    print(f"Recursive method: ind of {tar}:{binarySearch(arr, tar, 0, len(arr)-1)}")
    