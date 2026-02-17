n = (input())

count = 0
for i in range(len(n)):
    if(n[i]=="4" or n[i]=="7"):
       count+=1


count = str(count)
flag = False
for i in range(len(count)):
    if(count[i]=="4" or count[i]=="7"):
        flag = True
        break
if(flag):
    print("YES")
else:
    print("NO")
