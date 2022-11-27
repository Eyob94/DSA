import time
start_time = time.time()


a = [31, 41, 59, 26, 41, 58]


def sort_increasing():
    for i, element in enumerate(a):
        key = element
        j = i-1
        while (j >= 0):
            if (key < a[j]):
                a[j+1] = a[j]
                a[j] = key
            j -= 1


def sort_decreasing():
    for i, element in enumerate(a):
        key = element
        j = i-1
        while (j >= 0):
            if (key > a[j]):
                a[j+1] = a[j]
                a[j] = key
            j -= 1


sort_decreasing()

print(a)


print("Process finished --- %s seconds ---" % (time.time() - start_time))
