def merge_split(arr):
    mid = int(len(arr)/2)
    l = arr[0:mid]
    r = arr[mid:]

    if (len(arr) <= 1):

        return

    merge_split(l)
    merge_split(r)
    compare_merge(l, r, arr)


def compare_merge(a, b, arr):
    i = 0
    j = 0
    k = 0

    while (i < len(a) and j < len(b)):
        if (a[i] <= b[j]):
            arr[k] = a[i]
            i += 1
        else:
            arr[k] = b[j]
            j += 1
        k += 1

    while (i < len(a)):
        arr[k] = a[i]
        i += 1
        k += 1
    while (j < len(b)):
        arr[k] = b[j]
        j += 1
        k += 1

    return (arr)


arr = [3, 2, 1]
merge_split(arr)

print(arr)
