
for _ in range (int(input())):
	n,m=map(int,input().split())
	status=""
	for _ in range(m):
		status=status+'a'
	alpha={}
	alpha[3]='a'
	alpha[1]='b'
	alpha[2]='c'
	
	i=1
	j=1
	for _ in range(n-m):
		
		if(j==4):
			j=1
		
		
		status=status+alpha[j]
		j=j+1


	print(status)

