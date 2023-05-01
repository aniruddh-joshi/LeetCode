class Solution {
public:
    double average(vector<int>& salary) {
        double sum=0.0;
        int n=salary.size();
        int min_salary = salary[0];
        int max_salary = salary[0];

        for(int i=0;i<n;i++){
            sum+=salary[i];
            min_salary=min(min_salary,salary[i]);
            max_salary=max(max_salary,salary[i]);
        }
        sum-=(min_salary + max_salary);

        double average = sum/(n-2);
        return average;
    }
};
