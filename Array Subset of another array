def isSubset( a1, a2, n, s):
    if s>n: return "No"
    a1.sort(),a2.sort()
    i,j,cnt = 0,0,0
    while i<n and j<s :
        if a1[i] == a2[j]: i,j = i+1,j+1
        elif a1[i] < a2[j]: i+=1
        else: return 'No'
    return 'Yes'
