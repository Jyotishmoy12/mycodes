class Solution {
public:
    int addDigitshelper(int num) {
      int sum=0;
        while(num!=0){
            int digit=num%10;
            sum+=digit;
            num=num/10;
        }
        return sum;
    }
    int addDigits(int num){
        while(num>9){
            num=addDigitshelper(num);
        }
        return num;
    }
};