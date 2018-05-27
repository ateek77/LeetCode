class MedianFinder {
    priority_queue<double> mx; 
    priority_queue<double,vector<double> , greater<double> > mn;
    double mid;
public:
    /** initialize your data structure here. */
    MedianFinder() {
        mid=0;
    }
    
    void addNum(int n) {
        if(mn.size()==0 || n <= mid) 
            mx.push(n); 
        else 
            mn.push(n);  
        
        while(mn.size() < mx.size()-1)
        {
            mn.push(mx.top());
            mx.pop();
        }
        while(mn.size() > mx.size()+1)
        {
            mx.push(mn.top());
            mn.pop();
        }  
    }
    
    double findMedian() {
    double s1 = mn.size() , s2=mx.size();
    
    if(s1 == s2)
        mid = (mx.top() + mn.top()) /2;
    else if(s1 < s2 )
        mid = mx.top();
    else if( s1 > s2)
        mid = mn.top();
    return mid; 
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder obj = new MedianFinder();
 * obj.addNum(num);
 * double param_2 = obj.findMedian();
 */