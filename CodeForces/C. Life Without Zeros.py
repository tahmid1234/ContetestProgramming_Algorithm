a=input()
b=input()
sumO=int(a)+int(b)
newA=""
newB=""
newSum=""
i=0
for i in range(len(a)):

	if(a[i]!='0'):
		newA=newA+a[i]
		
for i in range(len(b)):
	if(b[i]!='0'):
		newB=newB+b[i]

while sumO:
	
	if(sumO%10!=0):
		
		newSum=str(sumO%10)+newSum
		
	sumO=sumO//10



	
if(int(newA)+int(newB)==int(newSum)):
	print("YES")
else:
	print("NO")
