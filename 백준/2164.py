import sys
from collections import deque
sys.setrecursionlimit(10**6)

def main():
    n = int(sys.stdin.readline().strip())
    de_que = deque([i for i in range(1, n+1)])
    while(len(de_que) != 1):
        de_que.popleft()
        temp_num = de_que.popleft()
        de_que.append(temp_num)
    print(de_que[0])



if __name__ == '__main__':
    main()