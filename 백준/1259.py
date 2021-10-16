import sys
sys.setrecursionlimit(10**6)

def main():
    while 1:
        n = sys.stdin.readline().strip()
        if n == '0': return
        size = len(n)
        flag = 1
        for i in range(size//2):
            if n[i] != n[size-i-1]:
                flag = 0
                print("no")
                break
        if flag:
            print("yes")
        


if __name__ == '__main__':
    main()