class Solution { 
  public: 
    struct node { 
      long long sum,sum1; 
    }; 
    

    vector<node> tree; 
    vector<long long> a; 
    void make(int id,int l,int r,int root) { 
      tree[root].sum1=0; 
      if(l==r) { 
        tree[root].sum=((a[l]>>id)&1); 
        return; 
      } 


      make(id,l,((l+r)>>1),root<<1); 
      make(id,((l+r)>>1)+1,r,root<<1|1); 
      tree[root].sum=tree[root<<1].sum+tree[root<<1|1].sum; 
      return; 
    } 


    void inserting(int id,int l,int r,int root) { 
      if(tree[root].sum1==1) { 
        tree[root].sum1=0; 
        tree[root<<1].sum1^=1; 
        tree[root<<1|1].sum1^=1; 
        tree[root<<1].sum=(((l+r)>>1)-l+1)-tree[root<<1].sum; 
        tree[root<<1|1].sum=(r-((l+r)>>1))-tree[root<<1|1].sum; 
      } 
      return; 
    } 


    long long query(int id,int l,int r,int L,int R,int root) { 
      if(l>=L&&r<=R) { 
        return tree[root].sum; 
      } 
      inserting(id,l,r,root); 
      long long ans=0; 
      if(L<=((l+r)>>1))ans+=query(id,l,((l+r)>>1),L,R,root<<1); 
      if(R>((l+r)>>1))ans+=query(id,((l+r)>>1)+1,r,L,R,root<<1|1); 
      return ans; 
    } 


    void modify(int id,int l,int r,int L,int R,int root) { 
      if(l>=L&&r<=R) { 
        tree[root].sum=(r-l+1)-tree[root].sum; 
        tree[root].sum1^=1; 
        return; 
      } 


      inserting(id,l,r,root); 
      if(L<=((l+r)>>1))modify(id,l,((l+r)>>1),L,R,root<<1); 
      if(R>((l+r)>>1))modify(id,((l+r)>>1)+1,r,L,R,root<<1|1); 
      tree[root].sum=tree[root<<1].sum+tree[root<<1|1].sum; 
      return; class Solution { 
  public: 
    struct node { 
      long long sum,sum1; 
    }; 
    


    vector<node> tree; 
    vector<long long> a; 
    void make(int id,int l,int r,int root) { 
      tree[root].sum1=0; 
      if(l==r) { 
        tree[root].sum=((a[l]>>id)&1); 
        return; 
      } 
      make(id,l,((l+r)>>1),root<<1); 
      make(id,((l+r)>>1)+1,r,root<<1|1); 
      tree[root].sum=tree[root<<1].sum+tree[root<<1|1].sum; 
      return; 
    } 



    void inserting(int id,int l,int r,int root) { 
      if(tree[root].sum1==1) { 
        tree[root].sum1=0; 
        tree[root<<1].sum1^=1; 
        tree[root<<1|1].sum1^=1; 
        tree[root<<1].sum=(((l+r)>>1)-l+1)-tree[root<<1].sum; 
        tree[root<<1|1].sum=(r-((l+r)>>1))-tree[root<<1|1].sum; 
      } 
      return; 
    } 



    long long query(int id,int l,int r,int L,int R,int root) { 
      if(l>=L&&r<=R) { 
        return tree[root].sum; 
      } 
      inserting(id,l,r,root); 
      long long ans=0; 
      if(L<=((l+r)>>1))ans+=query(id,l,((l+r)>>1),L,R,root<<1); 
      if(R>((l+r)>>1))ans+=query(id,((l+r)>>1)+1,r,L,R,root<<1|1); 
      return ans; 
    } 



    void modify(int id,int l,int r,int L,int R,int root) { 
      if(l>=L&&r<=R) { 
        tree[root].sum=(r-l+1)-tree[root].sum; 
        tree[root].sum1^=1; 
        return; 
      } 


      inserting(id,l,r,root); 
      if(L<=((l+r)>>1))modify(id,l,((l+r)>>1),L,R,root<<1); 
      if(R>((l+r)>>1))modify(id,((l+r)>>1)+1,r,L,R,root<<1|1); 
      tree[root].sum=tree[root<<1].sum+tree[root<<1|1].sum; 
      return; 
    } 



    vector<long long> handleQuery(vector<int>& nums1, vector<int>& nums2, vector<vector<int>>& queries) { 
      vector<long long> opt; 
      long long ans=0; 
      for(int i:nums2) ans+=i; 
      a.clear(); 
      a.resize(nums1.size()+1); 
      tree.clear(); 
      tree.resize(nums1.size()*4+100); 
      for(int i=1; i<=(int)nums1.size(); i++) a[i]=nums1[i-1]; 
      make(0,1,nums1.size(),1); 
      for(auto i:queries) { 
        if(i[0]==1) 
          modify(0,1,nums1.size(),i[1]+1,i[2]+1,1); 
        if(i[0]==2) 
          ans+=1ll*query(0,1,nums1.size(),1,nums1.size(),1)*i[1]; 
        if(i[0]==3) 
           opt.push_back(ans); 
      } 
      return opt; 
    }
};



    } 
    vector<long long> handleQuery(vector<int>& nums1, vector<int>& nums2, vector<vector<int>>& queries) { 
      vector<long long> opt; 
      long long ans=0; 
      for(int i:nums2) ans+=i; 
      a.clear(); 
      a.resize(nums1.size()+1); 
      tree.clear(); 
      tree.resize(nums1.size()*4+100); 
      for(int i=1; i<=(int)nums1.size(); i++) a[i]=nums1[i-1]; 
      make(0,1,nums1.size(),1); 
      for(auto i:queries) { 
        if(i[0]==1) 
          modify(0,1,nums1.size(),i[1]+1,i[2]+1,1); 
        if(i[0]==2) 
          ans+=1ll*query(0,1,nums1.size(),1,nums1.size(),1)*i[1]; 
        if(i[0]==3) 
           opt.push_back(ans); 
      } 
      return opt; 
    }
};