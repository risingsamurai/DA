class Solution {
public:
    string defangIPaddr(string address) {
        string result = "";    //dec new result         

    for(int c = 0; c < address.size(); c++){
            if(address[c] == '.'){
                result += "[.]";         
            } else {
                result += address[c];     
            }
        }
        return result;
    }
};