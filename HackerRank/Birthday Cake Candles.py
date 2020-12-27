
def birthdayCakeCandles(candles):
    # Write your code here
    dict={}
    tallest=0
    for elem in candles:
        tallest=max(elem,tallest)
        if elem in dict:
            dict[elem]=dict[tallest]+1
        else:
            dict[elem]=1
    return dict[tallest]
        
        
   
        
            

if __name__ == '__main__':
   

    candles_count = int(input().strip())

    candles = list(map(int, input().rstrip().split()))

    result = birthdayCakeCandles(candles)

    print(result)
