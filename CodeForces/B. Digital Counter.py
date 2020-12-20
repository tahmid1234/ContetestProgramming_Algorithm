dict ={}

dict[0]=2
dict[1]=7
dict[2]=2
dict[3]=3
dict[4]=3
dict[5]=4
dict[6]=2
dict[7]=5
dict[8]=1
dict[9]=2

n=int(input())
a=n//10
b=n%10
if(a==8 or b==8):
	print(dict[a]*dict[b])
else:
	print(dict[a]*dict[b])