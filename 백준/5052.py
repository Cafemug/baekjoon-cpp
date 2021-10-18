import sys

TC = int(sys.stdin.readline())
for _ in range(TC):

    li = []
    flag = 0

    n = int(sys.stdin.readline())
    for _ in range(n):
        li.append(sys.stdin.readline().strip())

    li.sort()
    flag = 0
    
    for i in range(len(li)-1):
        if li[i+1].startswith(li[i]):
            print("NO")
            flag = 1
            break

    if flag == 0:
        print("YES")