# Adjacency Matrix

def create_adjacency_matrix(V, edges):
    # Initialize an empty V x V matrix with all zeros
    matrix = [[0] * V for _ in range(V)]
    
    # Populate the matrix based on the edges
    for edge in edges:
        u, v = edge
        matrix[u][v] = 1
        matrix[v][u] = 1  # Undirected graph
    
    return matrix


# Example 1
V1 = 3
edges1 = [(0, 1), (1, 2), (2, 0)]
adj_matrix1 = create_adjacency_matrix(V1, edges1)
for row in adj_matrix1:
    print(row)
print()

# Example 2
V2 = 4
edges2 = [(0, 1), (1, 2), (1, 3), (2, 3), (3, 0)]
adj_matrix2 = create_adjacency_matrix(V2, edges2)
for row in adj_matrix2:
    print(row)

# Adjacency List

def adjacency_list_dictionary(V, edges):
   
    
    adjacency_list = {}

    # Add vertices to the dictionary
    for i in range(V):
        adjacency_list[i] = []

    # Add edges to the dictionary
    for edge in edges:
        vertex1, vertex2 = edge
        adjacency_list[vertex1].append(vertex2)

    # Display the adjacency list
    for vertex, neighbors in adjacency_list.items():
        print(f"{vertex} -> {' '.join(map(str, neighbors))}")


# testcase 1
V1 = 3
edges1 = [[0, 1], [1, 2], [2, 0]]
adjacency_list_dictionary(V1, edges1)

# testcase 2
V2 = 4
edges2 = [[0, 1], [1, 2], [1, 3], [2, 3], [3, 0]]
adjacency_list_dictionary(V2, edges2)