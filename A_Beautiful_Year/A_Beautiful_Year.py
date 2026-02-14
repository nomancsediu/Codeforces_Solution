n = int(input())

for y in range(n+1,9100):
    if(len(str(y))==len(set(str(y)))):
        print(y)
        break

