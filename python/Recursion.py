def findSum(n):
    if n==1:
        return 1
    return n+ findSum(n-1)
if __name__== '__main__':
    print(findSum(6))