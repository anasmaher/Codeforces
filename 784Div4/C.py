for t in range(int(input())):
    n = int(input())
    
    lst = list(map(int, input().split()))
    
    check = True
    
    if lst[0] % 2 == 0:
        for i in range(0, n, 2):
            if lst[i] % 2 != 0:
                check = False
                break
    else:
        for i in range(0, n, 2):
            if lst[i] % 2 == 0:
                check = False
                break
            
    if lst[1] % 2 == 0:
        for i in range(1, n, 2):
            if lst[i] % 2 != 0:
                check = False
                break
    else:
        for i in range(1, n, 2):
            if lst[i] % 2 == 0:
                check = False
                break
    
    if check:
        print("YES")
    else:
        print("NO")
