for i in range(5):
        x = list(map(int,input().split()))
        if 1 in x:
            j = x.index(1)
            print(abs(2-i) + abs(2-j))
            break


