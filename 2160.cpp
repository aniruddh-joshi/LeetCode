class Solution {
public:
    int minimumSum(int num) {
        int arr[4]; //declaring an array
        arr[0]=num%10;  //storing each digit
        arr[1]=(num/10)%10;
        arr[2]=(num/100)%10;
        arr[3]=(num/1000)%10;

        sort(arr,arr+4);
        return (arr[0]*10+arr[2]) + (arr[1]*10+arr[3]);
    }
};
