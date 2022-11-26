a = [1, 6, 2, 5, 1, 8, 12, 4, 2, 20, 21, 17, 12]

for i, element in enumerate(a):
    key = element
    j = i-1
    while (j >= 0):
        if (key < a[j]):
            a[j+1] = a[j]
            a[j] = key
        j -= 1

print(a)
