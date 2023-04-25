def kthSmallest(mat, n, k):
    # Create an empty list to store all elements in the matrix
    s = []

    # Loop through each row and column in the matrix
    for i in range(n):
        for j in range(n):
            # Add the current element to the list
            s.append(mat[i][j])

    # Sort the list in ascending order
    s.sort()

    # Return the k-th smallest element
    return s[k-1]
