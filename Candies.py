from re import M


t=int(input())
for i in range(t):
    n=int(input())
    li=list(map(int,input().split()))
    m=min(li)
    a=[i-m for i in li]
    print(sum(a))