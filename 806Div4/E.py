for _ in range(int(input())):
    n = int(input())
    a=[]
    for i in range(n):
        c = input()
        a.append(c)
    res = 0
    for i in range(n):
        for j in range(n):
            x = int(a[i][j])+int(a[j][n-i-1])+int(a[n-i-1][n-j-1])+int(a[n-j-1][i])
            y = 4-x
            res+=min(x, y)
    print(res//4)
