def findDuplicates(arr):
    tortise=arr[0]
    hare=tortise
    while True:
        tortise=arr[tortise]
        hare=arr[arr[hare]]
        print(tortise,"   ",hare)
        if (tortise==hare):
            break
    pt1=arr[0]
    pt2=tortise
    while pt1!=pt2:
        pt1=arr[pt1]
        pt2=arr[pt2]
        print()
        print(pt1,"  ",pt2)
    return pt1
print (findDuplicates([1,3,2,4,3]))