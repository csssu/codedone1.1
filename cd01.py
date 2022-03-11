inputuser = int(input())
counter = 0
mininputuserd = [100, 20, 10, 5, 1]
for i in mininputuserd:
  counter += int(inputuser / i)
  inputuser = inputuser % i
 
print(counter)