class Node(object):
    def __init__(self, data= None, next= None):
        self.data= data
        self.next= next
    def set_data(self, data):
        self.data= data
    def get_data(self):
        return self.data
    def set_next(self, next):
        self.next= next
    def get_next(self):
        return self.next
    
class LinkedList(object):
    def __init__(self, head=None):
        self.head=head
    
    def print_ll(self):
        temp= self.head
        while(temp):
            print(temp.data, end=" ")
            temp= temp.next

    def insert_start(self, data):
        new_node= Node(data)
        if self.head==None:
            self.head= new_node
        else:
            new_node.next= self.head
            self.head= new_node

    def insert_last(self, data):
        new_node= Node(data)
        temp= self.head
        while(temp.next!=None):
            temp= temp.next
        temp.next =new_node

    def delete(self, x):
        temp= self.head
        if(temp.next is not None):
            if(temp.data == x):
                self.head= temp.next
                temp=None
                return
            else:
                while(temp.next!=None):
                    if(temp.next.data==x):
                        prev=temp
                        temp=temp.next
                        prev.next= temp.next
                        return
                    else:
                        temp= temp.next

    def search(self, data):
        temp= self.head
        while(temp is not None):
            if(temp.data== data):
                return True
            else:
                temp=temp.set_next
            return False


    
if __name__== '__main__':
    List= LinkedList()
    List.head= Node(1)
    node2= Node(2)
    List.head.set_next(node2)
    node3= Node(3)
    node2.set_next(node3)
    node4= Node(4)
    node3.set_next(node4)
    List.print_ll()
    List.insert_start(20)
    print()
    List.print_ll()
    List.insert_last(30)
    print()
    List.print_ll()
    List.delete(1)
    print()
    List.print_ll()
    print()
    print(List.search(20))
                    


