
class Solution {
public:
    bool isPalindrome(int x) 
    {   
        int n,r,sum=0, temp;
       temp=n;
        while(n>0){
            r=n%10;
            sum=sum*10+r;
            n=n/10;
        }
        //n=temp;
        if(sum==temp){
            return true;
        }
        else{
            return false;
        }
    }
};
