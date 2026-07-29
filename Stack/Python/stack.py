class Stack:
    def __init__(self):
        self.stack=[]
    #push
    def push(self,data):
        self.stack.append(data)
    #pop
    def pop(self):
        if self.stack:
            return self.stack.pop()
    #peek the top
    def peek(self):
        return self.stack[-1]
    #check for empty
    def is_empty(self):
        return len(self.stack)==0

s=Stack()
print(s.is_empty())
s.push(1)
s.push(2)
print(s.peek())
print(s.pop())