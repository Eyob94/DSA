def selection_sort(arr):
    for i, element in enumerate(arr):
        key = element
        j = i+1
        while (j < len(arr)):
            if (arr[j] < key):
                arr[i] = arr[j]
                arr[j] = key
                key = arr[i]
            j += 1
    return arr


print(selection_sort([3, 2, 1, 4, 2, 5, 4, 6, 10, 9, 8, 2]))
