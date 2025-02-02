class Solution {
public:
    int flowercount(vector<int>& flowerbed,int n){
        int counter=0;
        for(int i=0;i<n;i++){
            if(flowerbed[i]==1){
                counter++;
            }
        }
        return counter;
    }
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int bed=flowerbed.size();
        int initialcount=flowercount(flowerbed,bed),finalcount=0;
        int counter=0;
        if(bed>1){
            for(int i=0;i<bed;i++){
                if(i==0){
                    if(flowerbed[i]==0 && flowerbed[i+1]==0){
                        flowerbed[i]=1;
                        counter++;
                        continue;
                    }
                }
                else if(i==bed-1){
                    if(flowerbed[i]==0 && flowerbed[i-1]==0){
                        flowerbed[i]=1;
                        counter++;
                        continue;
                    }
                }
                else if(i!=0 && i!=bed-1){
                    if(flowerbed[i-1]==0 && flowerbed[i]==0 && flowerbed[i+1]==0){
                        flowerbed[i]=1;
                        counter++;
                    }
                }
                else if(flowerbed[i]==1){
                    counter++;
                }
            }
        }
        else if(bed==1){
            if(n==1 && flowerbed[0]==0){
                return true;
            }
            else if(n==0 && flowerbed[0]==1){
                return true;
            }
            else if(n==0 && flowerbed[0]==0){
                return true;
            }
            else{
                return false;
            }
        }
        finalcount=flowercount(flowerbed,bed);
        if(initialcount+n<=finalcount){
            return true;
        }
        else{
            return false;
        }
    }
};