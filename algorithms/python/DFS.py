graph = {
    "A": ["B", "C"],
    "B": ["A", "C", "D"],
    "C": ["A", "B", "D", "E"],
    "D": ["B", "C", "E", "F"],
    "E": ["C", "D"],
    "F": ["D"]
}

def DFS(graph, s):
    stack = []
    stack.append(s)
    seen = set()
    seen.add(s)
    while ( len(stack) > 0 ):
        vertax = stack.pop()
        nodes = graph[vertax]
        for w in nodes:
            if w not in seen:
                stack.append(w)
                seen.add(w)

        print(vertax)

tmp = input("input:")

DFS(graph, tmp)
