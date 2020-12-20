import math
i=0
for _ in range(int(input())):
	i=i+1
	n,m=map(int,input().split())
	max_d=max(n,m)
	min_d=min(n,m)

	div=max_d/min_d
	mod=max_d%min_d
	if(min_d==max_d):
		print(0)
	elif(div%8!=0 and div%4!=0 and div%2!=0):
		print(-1)
	
	else:
		

		if(mod==0 and (div==2 or div==4 or div==8)):
			print(1)
		else:
			count=0
			
			
			while div!=1:
				
				print(div,count,div%8,div%4,div%2)
				
				if(div%8==0):
					div=div//8
				elif(div%4==0):
					div=div//4
				elif(div%2==0):
					div=div//2
				else:
					count=-1
					break
				
				
				count=count+1
			if(i==31):
				print(str(n)+str(m))
			else:
				print(count)