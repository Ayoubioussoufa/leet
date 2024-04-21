import collections

class Solution(object):
    def validPath(self, n, edges, source, destination):
        """
        :type n: int
        :type edges: List[List[int]]
        :type source: int
        :type destination: int
        :rtype: bool
        """
        graph = collections.defaultdict(list)
        for u, v in edges:
            graph[u].append(v)
            graph[v].append(u)
        def dfs(source, visited):
            if source == destination:
                return True
            visited.add(source)
            for neighbor in graph[source]:
                if neighbor not in visited:
                    if dfs(neighbor, visited):
                        return True
            return False
        visited = set()
        return dfs(source, visited)

s = Solution()
n = 10
edges = [[4,3],[1,4],[4,8],[1,7],[6,4],[4,2],[7,4],[4,0],[0,9],[5,4]]
source = 5
destination = 9
print(s.validPath(n, edges, source, destination))