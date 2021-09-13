class Solution:
    def destCity(self, paths: List[List[str]]) -> str:
        c = set()
        s = set()
        for path in paths:
            c.add(path[0])
            c.add(path[1])
            s.add(path[0])
        d = c - s
        return d.pop()