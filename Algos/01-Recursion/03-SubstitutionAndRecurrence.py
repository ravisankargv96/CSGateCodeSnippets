def T(n):
    if n == 0:
        return 0
    return T(n // 2) + T(n // 2) + n

# Eg. of Above, Calculating x^n
def pow(x, n):
    if n == 0:
        return 1
    
    if n % 2 == 0:
        return pow(x, n // 2) * pow(x, n//2)
    else:
        return x * pow(x, n// 2) * pow(x, n//2)

def RT(n):
    if n == 0:
        return 0
    return RT(n // 4) + RT(n // 2) + 1*(n**2)


if __name__ == "__main__":
    # T(5) # 1-ary Recursion
    # RT(5) # Bi-nary Recursion 
    x,n = 2,5
    print(f"pow({x},{n}) : {pow(2, 5)}")
    print(f"T({n}) : {T(n)}")
    print(f"RT({n}) : {RT(n)}")