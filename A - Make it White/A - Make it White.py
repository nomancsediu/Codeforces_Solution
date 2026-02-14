t = int(input())

while t>0:
    n = int(input())
    s = input()

    first = s.find('B')
    last = s.rfind('B')

    print(last - first + 1 )

    t-=1


