import sys
import queue
sys.setrecursionlimit(10**6)

class Node(object):
    def __init__(self, string, final_data=None):
        self.string = string
        self.final_data =final_data
        self.children = {}

class Trie():
    def __init__(self):
        self.head = Node(None)
    
    def insert(self, string):
        cur_node = self.head
        for char in string:
            if char not in cur_node.children:
                cur_node.children[char] = Node(char)
            cur_node = cur_node.children[char]
        cur_node.final_data = string
    
    def search(self, string):
        cur_node = self.head

        for char in string:
            if char in cur_node.children:
                cur_node = cur_node.children[char]
            else:
                return False
        
        if cur_node.final_data:
            return True
        else:
            return False

    def find_prefix(self, string):
        cur_node = self.head
        parent_words = []
        for char in string:
            if char in cur_node.children:
                cur_node = cur_node.children[char]
            else:
                return None
        q = queue.Queue()
        q.put(cur_node)
        while(not q.empty()):
            node = q.get()
            if node.final_data:
                parent_words.append(node.final_data)
            for n in node.children.values():
                q.put(n)
        

        return parent_words



def main():
    trie = Trie()
    n, m = map(int, sys.stdin.readline().strip().split(" "))
    answer = 0
    for _ in range(n):
        string = sys.stdin.readline().strip()
        trie.insert(string)
    for _ in range(m):
        string = sys.stdin.readline().strip()
        if trie.search(string):
            answer += 1

    print(answer)

if __name__ == '__main__':
    main()