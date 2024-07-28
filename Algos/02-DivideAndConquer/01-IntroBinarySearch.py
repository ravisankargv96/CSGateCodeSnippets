# Finding an element using binary Search
def binary_search(arr, target, low, high):

    if low > high: # empty array
        return False
    
    mid = (low + high)//2

    if arr[mid] == target: # Found Element
        return True 
    elif arr[mid] < target: # Search Space [mid+1, high]
        return binary_search(arr, target, mid + 1, high) 
    elif arr[mid] > target: # Search Space [low, mid-1]
        return binary_search(arr, target, low, mid-1)
    
def is_element_present(arr, target):
    return binary_search(arr, target, 0, len(arr) - 1)


if __name__ == "__main__":
    my_array = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    element_to_find = 9

    if is_element_present(my_array, element_to_find):
        print(f"{element_to_find} is present in the array")
    else:
        print(f"{element_to_find} is not present in the array")
    
    # Will be continued in Sorting & Searching