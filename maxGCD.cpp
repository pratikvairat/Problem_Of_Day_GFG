#include <bits/stdc++.h>
#include <cmath>

class Solution
{
public:
     void solve(Node* root,int &gcd,int &ans){
        if(!root){
            return;
        }
        if(root->left and root->right){
            int temp = __gcd(root->left->data,root->right->data);
            if(temp>gcd){
                gcd=temp;
                ans=root->data;
            }
            else if(temp==gcd){
                ans=max(ans,root->data);
            }
        }
        solve(root->left,gcd,ans);
        solve(root->right,gcd,ans);
    }
    int maxGCD( Node* root)
    {
        int gcd=0,ans=0;
        solve(root,gcd,ans);
        return ans;
    }
};
