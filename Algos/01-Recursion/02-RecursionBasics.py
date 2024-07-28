# 1-ary recursion
def add(n):
    if n <= 0:
        return 0
    return n + add(n)


# Iterative Approach
def pairSum(x,y):
    return x+y 

def addSequence(n):
    sum = 0
    for i in range(0, n):
        sum += pairSum(i,i + 1)
    return sum

if __name__ == "__main__":
    add(5) # 1-ary Recursion
    addSequence(5) # Iterative Approach