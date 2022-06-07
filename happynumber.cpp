class Solution {
public:
       bool isHappy(int n) {
        int res=n;
        for(int i=0;i<10;i++)
        {
            int sum=0;
            n=res;
     while(n!=0)
     {
     int p=n%10;
     sum=sum+p*p;
     n=n/10;
    }
          res=sum;
            if(res==1)
                return true;
        }
      return false;  
    }
};
