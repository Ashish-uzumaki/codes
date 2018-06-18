n=input()
a=map(int,raw_input().split())
b=map(int,raw_input().split())
d={}
c=0
for i in a:
    d[i]=1
for i in b:
    d[i]=1
for i in a:
    for j in b:
        if i^j in d:
            c+=1
if c%2==0:
    print "Karen"
else:
    print "Koyomi"
