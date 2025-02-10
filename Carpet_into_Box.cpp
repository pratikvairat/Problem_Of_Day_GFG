class Solution{
    public:
    int carpetBox(int Abhay, int Bat, int Cat, int Dog) {

        if((Abhay<=Cat&&Bat<=Dog) || (Bat<=Cat&&Abhay<=Dog)){
            return 0;  
        } 

        
        if(Abhay>Cat && Abhay>Dog){
            return 1+carpetBox(Abhay/2,Bat,Cat,Dog);  
        } 
        
        if(Bat>Cat && Bat>Dog){
            return 1+carpetBox(Abhay,Bat/2,Cat,Dog);
        } 
        return min(1+carpetBox(Abhay/2,Bat,Cat,Dog), 1+carpetBox(Abhay,Bat/2,Cat,Dog));
    }
};
