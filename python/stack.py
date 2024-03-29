class StackArray:

	MAX = 5

	stack = [] 	# stack
	
	def __init__(self):
		self.top = -1

	# It checks whether the stack is empty or not
	def isEmpty(self):
		if(self.top < 0):
			return True
		return False

	# It checks whether the stack is full or not
	def isFull(self):
		if(self.top >= self.MAX - 1):
			return True
		return False



	#function to push an element in the stack.
	def push(self, key):
		# if top becomes equal to MAX-1, then it means the array is full and we can't insert any element.
		# isFull() will return true, if stack is full.
		if(self.isFull()):
			print("Stack Overflow")
			return False

		# otherwise, increment top and add key to a[top], here top works as an index only. 
		self.top += 1
		self.stack.append(key)
		print("The element is pushed and top points to => ",self.stack[self.top])
		return True

	# function to delete an element in the stack, it returns the deleted element otherwise -1. */
	def pop(self):
		# if top is -1, it means there is no element to be deleted
		if(self.isEmpty()):
			print("Stack underflow")
			return -1

		# otherwise, delete the element from the top and decrement top.
		deletedElement = self.stack[self.top]
		self.top -= 1
		return deletedElement

	# function through which we can see the element present at the top.
	def peek(self):
		if(self.isEmpty()):
			print("There is no record in the stack.")
			return -1

		peekElement = self.stack[self.top];
		return peekElement;

if __name__ == '__main__': 
	s = StackArray()
	s.push(10) 
	s.push(20) 
	s.push(30) 
	s.push(40) 
	s.push(50) 
	s.push(60) 

	