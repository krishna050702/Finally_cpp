t=int(input())
for i in range(t):
    str=input()
    k=str[:3]
    j=str[3:]
    sum1=0
    sum2=0
    for m in k:
        sum1=sum1+int(m)
    for n in j:
        sum2=sum2+int(n)
    
    if(sum1==sum2):
        print("YES")
    else:
        print("NO")
