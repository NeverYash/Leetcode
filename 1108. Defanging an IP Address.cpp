class Solution {
public:
    string defangIPaddr(string address) {
        string s2;
        for(size_t i=0;i<address.size();i++){
            if(address[i] == '.'){
                s2 += "[.]";
            }
            else
            s2 += address[i];
        }
        return s2;
       
    }
     
};
