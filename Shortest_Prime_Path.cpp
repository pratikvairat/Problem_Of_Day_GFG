bool a=false;
vector<int> prime(10000,1);
class Solution{ 
  void isPrime(){
      for(int i=2;i<10000;i++){
          for(int j=i+i;j<10000;j=j+i){
              prime[j]=0;
          }
      }
  }
  public:
    int shortestPath(int Num1,int Num2)
    {   
        if(!a){
            isPrime();
            a=true;
        }
        queue<pair<int,int>> q;
        q.push({Num1,0});
        vector<int> visited(10000,0);
        visited[Num1]=1;
        while(q.size()){
            auto t=q.front();
            q.pop();
            if(t.first==Num2){
                return t.second;
            }
            string num=to_string(t.first);
            for(int j=0;j<4;j++){
                for(int k=0;k<=9;k++){
                    char c= '0'+k;
                    string num2=num;
                    num2[j]=c;
                    int temp=stoi(num2);
                    if(prime[temp] and num2[0]!='0' and visited[temp]==0){
                        q.push({temp,t.second+1});
                        visited[temp]=1;
                        
                    }
                    
                }
            }
        }
        return -1;
    }
};
