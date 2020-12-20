for _ in range (int(input())):
	n=int(input())
	a=list(map(int,input().split()))
	dict ab={}
	max_x=0
	x=0
	for elem in a:
		if(elem in a):
			ab[elem]=ab[elem]+1
			if(max_x<ab[elem]):
				x=elem
				
		else:
			ab[elem]=1





	b=a.copy()
	b.sort()
	c=[]
	x=(b[0]+b[n-1])//2
	for i in range (n):
		if(a[i]%x==0 or x%a[i]==0):
			c.append(a[i])
		else:
			c.append(x)
	print(*c)