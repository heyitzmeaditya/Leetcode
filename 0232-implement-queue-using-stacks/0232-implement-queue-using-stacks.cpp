class MyQueue {
public:
    stack<int>st1;
    stack<int>st2;
    MyQueue() {
    }

    bool empty() {
        return st1.empty() &&st2.empty();
        
    }
     
    void push(int x) {
        st1.push(x);
        
    }
    
    int pop() {
        if(empty()){
            return 0;
        }
        if(!st2.empty()){
            int element =st2.top();
            st2.pop();
            return element;
        }
        else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            int element=st2.top();
            st2.pop();
            return element;
        }
    }
    
    int peek() {
        if(empty()){
            return 0;
        }
        else if(!st2.empty()){
            int element=st2.top();
            return element;

            

        }else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            int element=st2.top();
            return element;
            
        }
        
    }
    
    
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */