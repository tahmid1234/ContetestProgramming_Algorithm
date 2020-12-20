for _ in range(int(input())):
	a,b,c=map(int,input().split())

	mod=(a+b+c)%9
	div=(a+b+c)//9

	if(a<div or b<div or c<div or mod!=0):
		print("NO")

	else:
		print("YES")
	