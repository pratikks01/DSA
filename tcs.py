# 
# *PROBLEM:*

# Given a directed graph with N nodes and M edges. Each node is associated with
# lowercase english alphabet. Beauty of a path is defined as the number of most
# frequently occurring alphabet.. Find the most beautiful path and return the
# maximum beauty value it has.

# *CONSTRAINTS:*

# 1 < N,M < 300000
# *FUNCTION DESCRIPTION:* Complete the function beauty in code. Function must
# Return an integer, the beauty of most beautiful path. If the value is very
# large return -1.

# Function beauty has the following parameter(s):

# n: integer, number of nodes

# m: integer, number of directed edges

# S: string of length n where ith alphabet denotes the alphabets associated
# with ith node

# X: list of length m

# Y: list of length m
# X, Y: two integers arrays of length M, pair Xi, Yi denotes there is an edge
# from node Xi to Yi.

# Output

# Return an integer, the beauty of most beautiful path. If the value is very
# large return -1.

# *EXAMPLE:*

# Input:

# n: 5

# m: 4

# s: abaca

# x: [ 1, 1, 3, 4] y: [2, 3, 4, 5]

# Output:- 3

# Explanation - Path with maximum beauty is (1->3->4->5) ie (asca)
# 

import functools, collections
def beauty(n, m, s, x, y):

    graph = collections.defaultdict(list)
    for i in range(m):
        graph[x[i]].append(y[i])
    @functools.lru_cache(None)
    def dfs(node):
        if node not in graph:
            return collections.Counter(s[node-1])
        return max([collections.Counter(s[node-1]) + dfs(i) for i in graph[node]], key=lambda x: x.most_common(1)[0][1])
    return max([dfs(i) for i in graph[1]], key=lambda x: x.most_common(1)[0][1]).most_common(1)[0][1]

if __name__ == '__main__':
    n = int(input().strip())
    m = int(input().strip())
    s = input().strip()
    x = list(map(int, input().rstrip().split()))
    y = list(map(int, input().rstrip().split()))
    result = beauty(n, m, s, x, y)
    print(result)
