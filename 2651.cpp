class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int total_delay=(arrivalTime+delayedTime)%24;
        return total_delay;
    }
};
