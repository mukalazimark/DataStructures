class Node(object):

    def __init__(self, data, next = None):
        self.data = data;
        self.next = next;
        
    def setData(self, data):
        self.data = data;
        
    def getData(self):
        return self.data
    
    def setNext(self, next):
        self.next = next
        
    def getNext(self):
        return self.next
    
class LinkedList(object):

    def __init__(self):
        self.head = None
        
    def printLinkedList(self):
        temp = self.head
        while(temp):
            print(temp.data)
            temp = temp.next
            
    def insertAtStart(self, data):
        newNode = Node(data)
        newNode.next = self.head
        self.head = newNode

    def insertBetween(delf, prev_node, data):
        if (prev_node.next == None):
            print("The previous node must have a next node.")
            print()
        else:
            newNode = Node(data)
            newNode.next = prev_node.next
            prev_node.next = newNode

    def insertAtEnd(self, data):
        newNode = Node(data)
        temp = self.head
        while (temp.next != None):
            temp = temp.next
        temp.next = newNode

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
                temp = None
                return
            else:
                while (temp.next != None):
                    if (temp.data == data):
                        break
                    prev = temp
                    temp = temp.next

                if temp == None:
                    return

                prev.next = temp.next
                return

    def search(self, node, data): 
        if node == None:
            return False
        elif (node.data == data):
            return True
        return self.search(node.getNext(), data)

    def reverse(self):
        prev = None
        current = self.head

        while (current != None):
            temp = current.next
            current.next = prev
            prev = current
            current = temp
        self.head = prev

if __name__ == '__main__':
    myLinkedList = LinkedList()
    for i in range(12, 0, -1):
        myLinkedList.insertAtStart(i)

    print('Original:')
    myLinkedList.printLinkedList()
    print()
    print('Reversed:')
    myLinkedList.reverse()
    myLinkedList.printLinkedList()