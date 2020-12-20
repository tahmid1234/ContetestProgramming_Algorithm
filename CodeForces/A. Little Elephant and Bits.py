a=input()

b=-1
flag=0
status=""
l=len(a)
for i in range(l):
	if(a[i]=='0'):
		b=i
		break


if(b==-1):

	b=l-1

a=a[0:b:]+a[b+1::]
print(a)



