t=int(input())
for i in range(0,t):
    li=[]
    k,n=map(int,input().split())
    a = list(map(int,input().strip().split()))[:k]
    for ele in a:
        if(n-ele>=0):
            n=n-ele
            li.append(1)
        else:
            li.append(0)
    print(''.join(map(str, li)))