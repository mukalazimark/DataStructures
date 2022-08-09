class Node(object):

    def __init__(self, data, next = None, prev = None):
        self.data = data;
        self.next = next;
        self.prev = prev;
        
    def setData(self, data):
        self.data = data;
        
    def getData(self):
        return self.data
    
    def setNext(self, next):
        self.next = next
        
    def getNext(self):
        return self.next

    def setPrev(self, prev):
        self.prev = prev
        
    def getPrev(self):
        return self.next
    
class LinkedList(object):

    def __init__(self):
        self.head = None
        
    def printLinkedList(self):
        temp = self.head
        while(temp):
            print(temp.data)
            temp = temp.next

    def printReverse(self): 
        temp = self.head
        while(temp.next != None):
            temp = temp.next
        while (temp.prev != None):
            print(temp.data)
            temp = temp.prev
            
    def insertAtStart(self, data):
        newNode = Node(data)
        if (self.head == None):
            self.head = newNode
        else:
            self.head.prev = newNode
            newNode.next = self.head
            self.head = newNode

    def insertBetween(self, prev_node, data):
        if (prev_node.next == None):
            print("The previous node must have a next and previous node.")
            print()
        else:
            newNode = Node(data)
            
            newNode.next = prev_node.next
            newNode.prev = prev_node
            prev_node.next.prev = newNode
            prev_node.next = newNode

    def insertAtEnd(self, data):
        newNode = Node(data)
        temp = self.head
        while (temp.next != None):
            temp = temp.next
        temp.next = newNode
        newNode.prev = temp

    def length(self):
        count= 0
        temp = self.head
        while (temp != None):
            count += 1
            temp = temp.next

        print("The Length of LinkedList is : ", count)

    def delete(self, data):

        temp = self.head

        if (temp.next != None):
            if (temp.data == data):
                self.head = temp.next
                self.head.prev = None
                temp = None
                return
            else:
                while (temp.next != None): 
                    if (temp.data == data):
                        break
                    previous = temp
                    temp = temp.next

                if temp == None:
                    return

                previous.next = temp.next
                temp.next.prev = previous
                return

    def search(self, node, data):
        if node == None:
            return False
        elif (node.data == data):
            return True
        return self.search(node.getNext(), data)

    def reverse(self): 
        previous = None
        current = self.head

        while (current != None):
            temp = current.next
            current.next = previous
            if (previous != None):
                previous.prev = current
            previous = current
            current = temp
        self.head = previous

if __name__ == '__main__':
    myLinkedList = LinkedList()
    for i in range(12, 0, -1):
        myLinkedList.insertAtStart(i)

    print('Original:')
    myLinkedList.printLinkedList()
    print()
    print('Reversed:')
    myLinkedList.printReverse()