#  Python program to reverse a linked list

# Node of a linked list
class Node:
	def __init__(self: int, data: int) -> None:
		self.data = data
		self.next = None

class LinkedList:
	def __init__(self) -> None:
		self.head = None

	def push(self, data) -> None:
		new_node = Node(data)
		new_node.next = self.head
		self.head = new_node

	def printList(self) -> None:
		temp = self.head
		while(temp):
			print(temp.data)
			temp = temp.next

	def reverse(self) -> None:
		prev = None
		current = self.head
		while(current is not None):
			next = current.next
			current.next = prev
			prev = current
			current = next
		self.head = prev


# Driver code
llist = LinkedList()
llist.push(20)
llist.push(4)
llist.push(15)
llist.push(85)
 
print("Given Linked List")
llist.printList()
llist.reverse()
print("Reversed Linked List")
llist.printList()