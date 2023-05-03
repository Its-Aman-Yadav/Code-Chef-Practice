class Solution{
  public:
    int firstbadversion(int n){
      int l=1,h=n;

      while(l<=h){
        long long m=(l+h)/2;
        cout<<l<<" "<<h<<" "<<m<<"\n";
        if(badversion(m)==true){
          h=m-1;
          a=m;
        }
      }
    }
}