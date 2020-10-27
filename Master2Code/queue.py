queue= []
queue1= []
queue.append(1)
queue.append(2)
queue.append(3)
queue.append(4)

print("Queue- ")
print(queue)


if(len(queue)):
    print("Removed element is "+ str(queue.pop(0)))

print("Queue after removal ")
print(queue)
