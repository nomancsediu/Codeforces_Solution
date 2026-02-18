n = int(input())

for _ in range(n):
    s = input()
    first = s[0]
    last = s[len(s)-1]
    middle = len(s) -2
    if(len(s)>10):
       print(first+str(middle)+last)
    else:
        print(s)

