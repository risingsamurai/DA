class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int tx=target[0];
        int ty=target[1];
        int distbig=INT_MAX;
        int distindex=-1;
        
       
       for(int i=0;i<drones.size();i++){
           int range=drones[i][2];  
           int x=drones[i][0];
           int y=drones[i][1];
              int dist = abs(x - tx) + abs(y - ty);
           if(abs(x-tx)+abs(y-ty)<=range){//abs for |x|
            if (dist < distbig) {
                    distbig = dist;
                    distindex = i;
                }
           }
       }
        return distindex;
    }
};