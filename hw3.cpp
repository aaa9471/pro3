    class Student{
    public:
        void makeMove(int Record[5][6], int Max[5][6], Color color[5][6], Color inputColor){
            //針對


            //一般[0]
            if(color[0][0] == 0){
                x = 0;y = 0;
                return;
            }
            else if(color[0][0] == inputColor){
                if(color[0][1] == 3-inputColor||color[1][0] == 3-inputColor){
                    x = 0;y = 0;
                    return;
                }    
            }
            if(color[0][5] == 0){
                x = 0;y = 5;
                return;
            }
            else if(color[0][5] == inputColor){
                if(color[1][5] == 3-inputColor||color[0][4] == 3-inputColor){
                    x = 0;y = 5;
                    return;
                }    
            }
            if(color[4][0] == 0){
                x = 4;y = 0;
                return;
            }
            else if(color[4][0] == inputColor){
                if(color[3][0] == 3-inputColor||color[4][1] == 3-inputColor){
                    x = 4;y = 0;
                    return;
                }    
            }
            if(color[4][5] == 0){
                x = 4;y = 5;
                return;
            }
            else if(color[4][5] == inputColor){
                if(color[3][5] == 3-inputColor||color[4][4] == 3-inputColor){
                    x = 4;y = 5;
                    return;
                }    
            }
            
            for(int i =1;i<6;i++){
                if(color[4][i] == 0){
                    x = 4;y = i;
                    return;
                }
            }
            
            for (int i=0;i<5;i++){
                for(int j = 0; j<6;j++){
                    int k;
                    if(i == 1|| i == 3)k = j;
                    else k = 5-j;

                    if(color[4-i][k] == 0||color[4-i][k] == inputColor){
                        x = 4-i;y = k;
                        return;
                    }
                }
            }
        }
        // Any Code You Want to Add
        int getX(){
            // Your Code
            return x;
        }
        int getY(){
            return y;
            // Your Code
        }
        int map1[5][6] = {2,2,2,1,0,1,
                      3,4,4,4,3,1,
                      3,4,4,4,4,3,
                      3,4,4,4,4,3,
                      2,3,3,3,3,2};
    
    private:
        int x;
        int y;
    };