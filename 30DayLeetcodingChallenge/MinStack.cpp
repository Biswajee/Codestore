class MinStack {
    static int arr[] = new int[300000];
    int stop;
    /** initialize your data structure here. */
    public MinStack() {
        stop=-1;
    }
    
    public void push(int x) {
        arr[++stop]=x;
    }
    
    public void pop() {
        if(stop != -1) {
            stop--;
        }
    }
    
    public int top() {
        return arr[stop];
    }
    
    public int getMin() {
        int mn=Integer.MAX_VALUE;
        for(int i=0; i<stop+1; i++) {
            if(mn > arr[i]) mn = arr[i];
        }
        return mn;
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */