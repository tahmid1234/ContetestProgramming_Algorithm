for _ in range(int(input())):
	n=int(input())
	d=n//7
	m=n%7

	a=d*2
	if(m>=5):
		a=a+2
	elif(m==4):
		a=a+1
	print(n+a)

