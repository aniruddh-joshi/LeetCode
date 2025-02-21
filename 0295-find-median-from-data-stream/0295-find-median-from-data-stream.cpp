class MedianFinder {
    private:
    priority_queue<int> maxheap;
    priority_queue<int,vector<int>,greater<int>> minheap;

public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        maxheap.push(num);
        int temp = maxheap.top();
        maxheap.pop();
        minheap.push(temp);

        if(minheap.size() > maxheap.size()){
            temp = minheap.top();
            minheap.pop();
            maxheap.push(temp);
        }

    }
    
    double findMedian() {
        if(maxheap.size() != minheap.size())
            return (double) maxheap.top();
        else
            return (double) (maxheap.top() + minheap.top()) / 2;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */