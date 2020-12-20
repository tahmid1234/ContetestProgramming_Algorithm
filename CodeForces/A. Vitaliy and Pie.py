n=int(input())
a=input()
count={}
keys=0
i=0
for _ in range(n-1):

	if(a[i].capitalize()!=a[i+1]):
		if a[i] in count:
			count[a[i]]=count[a[i]]+1
		else:
			count[a[i]]=1


		x=a[i+1].lower()
		
		if  x in count:
			count[x]=count[x]-1
		else:
			keys=keys+1
	i=i+2


print(keys)