def find_factors(arr, x):
    for i, element in enumerate(arr):
        key = x-element

        key2 = binary_search(arr, key)

        if (key2):
            print('%d and %d are factors' % (element, key))


def binary_search(arr, x):

    lo = 0
    hi = len(arr)-1

    while (lo <= hi):
        mid = int((lo+hi)/2)
        if (x == arr[mid]):
            return mid
        elif (x > arr[mid]):
            lo = mid+1
        else:
            hi = mid-1
    return None


find_factors([1, 2, 3, 4, 5], 7)
