n = int(input())

sumx=0
sumy=0
sumz=0
for _ in range(n):
    xi,yi,zi = map(int,input().split())

    sumx+=xi
    sumy+=yi
    sumz+=zi

if (sumx==0 and sumy==0 and sumz==0):
    print("YES")
else:
    print("NO")