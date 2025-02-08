 int squares(int n)
    {
   int square=0,mod;
   while(n>0)  
    {
    mod=n%10;
    n=n/10;
    square=square+(mod*mod);
    }
    return square;
   }

bool isHappy(int n) {
    int slow=n,fast=n;
    do{
    slow= squares(slow);
    fast=squares(squares(fast));
    if(slow==fast)
    break;
    } while(fast!=1);
    return fast==1;
  }
    
