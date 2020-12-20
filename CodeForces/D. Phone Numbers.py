n=int(input())
taxi_man=""
pizza_man=""
girl_man=""

pizza=-1
taxi=-1
girl=-1

for _ in range(n):
	m,name=input().split()
	my_taxi=0
	my_pizza=0
	my_girls=0
	for _ in range (int(m)):
		a=list(input().split('-'))
		if(a[0][0]==a[0][1] and a[0][1]==a[1][0] and a[1][0]==a[1][1] and a[1][1]==a[2][0] and a[2][0]==a[2][1]):
			my_taxi=my_taxi+1
		elif(a[0][0]>a[0][1] and a[0][1]>a[1][0] and a[1][0]>a[1][1] and a[1][1]>a[2][0] and a[2][0]>a[2][1] ):
			my_pizza=my_pizza+1
		else:
			my_girls=my_girls+1

	if(taxi<my_taxi):
		taxi_man=name
		taxi=my_taxi
	elif(taxi==my_taxi):
		taxi_man=taxi_man+', '+name
	if(pizza<my_pizza):
		pizza_man=name
		pizza=my_pizza
	elif(pizza==my_pizza):
		pizza_man=pizza_man+', '+name
	if(girl<my_girls):
		girl_man=name
		girl=my_girls
	elif(girl==my_girls):
		girl_man=girl_man+', '+name



print("If you want to call a taxi, you should call: "+taxi_man+".")
print("If you want to order a pizza, you should call: "+pizza_man+".")
print("If you want to go to a cafe with a wonderful girl, you should call: "+girl_man+".")


