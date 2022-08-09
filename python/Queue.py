
import sys

class QueueUsingArray:
    
    SIZE = 10

    queue = [-sys.maxsize - 1] * 10  # queue

    # As soon as the object of this class is created, front & rear is assigned as -1.
    def __init__(self):
        self.front = -1
        self.rear = -1

    # It checks whether the queue is empty or not,  if front is -1, the queue will be empty.
    def isEmpty(self):
        if (self.front == -1):
            return True
        return False

    # It checks whether the queue is full or not, 
    def isFull(self):
        if (self.front == 0 and self.rear == self.SIZE - 1):
            return True
        if (self.front == self.rear + 1):
            return True
        return False

    def enQueue(self, element):
        if (self.isFull()):
            print("Queue is full")
        else:
            if self.front == -1:
                self.front = 0
            self.rear = (self.rear + 1) % self.SIZE
            self.queue[self.rear] = element
            print("Enqueue Operation Done, rear is at ", element)

    def deQueue(self):
        if (self.isEmpty()):
            print("Queue is empty")
            return -1
        else:
            element = self.queue[self.front]

            if (self.front == self.rear):
                self.front = -1
                self.rear = -1
            # Q has only one element, so we reset the queue after deleting it.

            else:
                self.front = (self.front + 1) % self.SIZE
            return element

    def peek(self):
    	if(self.isEmpty()):
    	    print("Queue is empty")
            return -1
        else:
    	    return self.queue[self.front]


if __name__ == '__main__':

    q = QueueUsingArray()
    q.enQueue(11)
    q.enQueue(12)
    q.enQueue(13)
	deleted = q.dequeue()
	print("Deleted Element is: ", deleted)
	print("Front element is: ", q.peek())


