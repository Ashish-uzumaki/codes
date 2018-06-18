for _ in range(input()):
    s=raw_input()
    x,y=map(int,raw_input().split(' '))
    ca=0
    cb=0
    for i in s:
        if i=='a':
            ca+=1
        else:
            cb+=1
    ans =""
    if ca!=cb and ca!=0 and cb!=0:
        d=len(s)/max(ca,cb)
        if ca>cb:
            mx = 'a'
            mn = 'b'
            mc = x
        else:
            mx = 'b'
            mn = 'a'
            mc = y
        print mx,mn,d
        ans+=mx
        for i in range(1,len(s)):
            if i%d!=0:
                ans+=mx
            else:
                ans+=mn
        count=0
        ans2 = ""
        for i in range(len(s)):
            temp = ans[i]
            if ans[i]==mx:
                count+=1
            else:
                count = 0
            if count > mc:
                temp = '*'+temp
                count = 0
            ans2+=temp
    elif ca==cb:
        ans2=""
        for i in range(len(s)):
            if i%2==0:
                ans2+='a'
            else:
                ans2+='b'
    elif cb==0:
        ans2="a"
        for i in range(1,len(s)):
            if i%x==0:
                ans2+='*a'
            else:
                ans2+='a'
    elif ca==0:
        ans2="b"
        for i in range(1,len(s)):
            if i%y==0:
                ans2+='*b'
            else:
                ans2+='b'
    print ans2
