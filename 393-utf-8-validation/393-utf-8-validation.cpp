class Solution {
public:
    bool validUtf8(vector<int>& data) {
         int i = 0;
        while(i < data.size()){
            bitset<8> b(data[i]);
            string front_byte = b.to_string();
            if(front_byte[0] == '1' && front_byte[1] == '0') return false;
            int j = 0, cont = i;
            
            while(front_byte[j] == '1'){
                cont++;
                j++;
            }
            i++;
            if(cont-i >= 4 || cont > data.size()) return false; 
            while(i < cont){
                bitset<8> c(data[i]);
                string cont_byte = c.to_string();
                if(cont_byte[0] != '1' || cont_byte[1] != '0') return false;
                i++;
            }
        }
        return true;
    }
};