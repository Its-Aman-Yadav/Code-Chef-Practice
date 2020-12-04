# Insertion Sort

a = [23,4,54,34,65,43,3]

for i in range(1,len(a)):
    key = a[i]
    j = i-1

    while j >= 0 and key < a[j]:
        a[j+1] = a[j]
        j = j-1
    else :
        a[j+1] = key

print(a)