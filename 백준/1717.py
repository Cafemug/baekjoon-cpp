import sys
sys.setrecursionlimit(10**6)

def find(n, p):
    if p[n] == -1: return n
    p[n] = find(p[n], p)
    return p[n]

def merge(x, y, p):
    x = find(x, p)
    y = find(y, p)
    if(x == y): return 0
    p[x] = y

def main():
    n, m = map(int, sys.stdin.readline().split(" "))
    p = [-1 for _ in range(n+1)]
    for _ in range(m):
        t, a, b = map(int, sys.stdin.readline().split(" "))
        if t == 0:
            merge(a, b, p)
        else:
            if find(a, p) != find(b, p):
                print("NO")
            else:
                print("YES")
                

if __name__ == '__main__':
    main()