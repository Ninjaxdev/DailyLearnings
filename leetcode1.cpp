//ARRAY ->1) Duplicate values (also done by set continer and XOR operation)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*int main()
{
   vector<int>v={1,1,1,3,3,4,3,2,4,2};
   for(int i=1;i<v.size();i++)
   {
      if(v[i-1]==v[i])
        cout<<"false"<<endl;
      else
         cout<<"true"<<endl;
   }
   
    return 0;
}*/
//2) Missing no in (0,n) range ,array contain all distinct nos
//idea is subtract sum of elements in an array from sum of natural no

/*int main()
{
   vector<int>arr={0,1,2,3,4,5,7,8,9};
   int sum=0,n;
   for(int i=0;i<arr.size();i++)
    sum=sum+arr[i];
    
   cout<<"enter the value of n:";
   cin>>n;
   int S=(n*(n+1))/2;
   cout<<"Missing nos is:"<<S-sum;
   return 0;
}*/

//3)Find all missing numbers in an array , array containing duplicate elements ->O(n)(space and time)

/*int main()
{
   vector<int>arr={4,3,2,7,8,2,3};
   set<int>s;
   for(int i=0;i<arr.size();i++)
   {
      s.insert(arr[i]);
   }
   for(auto val:s)
      cout<<val<<" ";
   cout<<endl;
   //last element value in set->end()(derefrence krne se phle -- decrement krna pdta hai)
   //,rbegin()(derefrence krna pdta hai)
   //ese hi begin() for first element value
   int n=*--s.end();
  // cout<<n<<endl;
   vector<int>r;
   for(int i=1;i<=n;i++)
   {
      if(!s.count(i))  //count() is used to check whether element in a set exsist or not
        r.push_back(i);
   }
   for(auto j:r)
     cout<<j<<" ";
   return 0;
}*/

// Q(4):two sum (given an array & target integer we have to return indices which sum up to target integer)

/*int main()
{
   vector<int>arr={2,7,11,15};
   int target=9;
   int left=0;
   int right=arr.size()-1;
   int sum=0;
   while(left<right)
   {
     sum=arr[left]+arr[right];
     if(target==sum)
         {cout<<"("<<left<<","<<right<<")"<<endl;
            break;
         }
     else if(sum<target)
       left++;
     else 
       right--;
   
   }
   return 0;
}*/

//Q 5)how many nos are smaller than the current element

int main()
{
   vector<int>nums={8,1,2,2,3};
   vector<int>sorted(nums);
   sort(sorted.begin(),sorted.end());
   unordered_map<int,int> u;
   for(int i=0;i<nums.size();i++)
   {
      if(!u.count(sorted[i]))
        u[sorted[i]]=i;
   }
   for(int i=0;i<nums.size();i++) //map to vector insitalization
     nums[i]=u[nums[i]];

   for(auto j:nums)
     cout<<j<<" ";
   return 0;
}