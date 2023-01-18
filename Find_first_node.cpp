class Solution
{
    public:
    int findFirstNode(Node* head)
    {
        unordered_map<Node*,bool> mp;
        Node* temp=head;
        while(temp!=NULL){
            if(mp[temp]==true){
                return temp->data;
            }
            mp[temp]=true;
            temp=temp->next;
        }
        return -1;
    }
};
