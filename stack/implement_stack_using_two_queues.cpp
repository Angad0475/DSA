class MyStack {
    private:
     queue<int>q1,q2;
public:
    MyStack() { }
    
    void push(int x) {
        while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
        }

        q1.push(x);

        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
        if(q1.empty()){
            return -1;
        }
        int topElement=q1.front();
        q1.pop();
        return topElement;
    }
    
    int top() {
        if(q1.empty()){
            return -1;
        }
        int topelement=q1.front();
        return topelement;
    }
    
    bool empty() {
        return q1.empty();
    }
};
