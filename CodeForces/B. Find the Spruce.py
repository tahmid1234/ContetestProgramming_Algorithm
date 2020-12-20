for _ in range(int(input())):
	n,m=map(int,input().split())
	dict=[]
	k=0
	
	for i in range(n):
		dict.append(i)
		dict[i]=[]
		a=list(input())
	
		for j in range(m):
			
			if(a[j]=='*'):
				k=k+1
				dict[i].append(k)
			else:
				dict[i].append(0)
			

				
	
	
	for i in range(0,n-1):
		for j in range(1,m-1):
			
			p=dict[i][j]
			if(dict[i][j]!=0):
				
				x=i+1
				a=1
				b=2
				while x<n and j+a<m:
					
					if dict[x][j+a] - dict[x][j-a]==b:
						k=k+1
						x=x+1
						a=a+1
						b=b+2
					else:
						break






	print(k)





		

			
