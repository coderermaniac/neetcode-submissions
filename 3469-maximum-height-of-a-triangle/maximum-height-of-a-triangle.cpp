class Solution {
public:
    int height(int red ,int blue){
        int ans=0;
        int row=1;
        while(true){
            if(row%2!=0){
                if(red<row){
                    break;
                }
                red-=row;
            }
            else{
                if(blue<row){
                    break;
                }
                blue-=row;
            }
            ans++;
            row++;
        }
        return ans;
    }
    int maxHeightOfTriangle(int red, int blue) {
        return max(height(red,blue),height(blue,red));
        
    }
};