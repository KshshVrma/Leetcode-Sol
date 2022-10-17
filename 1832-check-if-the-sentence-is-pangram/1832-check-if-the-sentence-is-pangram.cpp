class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[26]={0};
        for(int i=0;i<sentence.length();i++){
            if(sentence[i]!=' '){
                arr[sentence[i]-97]++;
            }
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(arr[i]>0){
                count++;
            }
        }
        if(count==26){
            return true;
        }
        return false;
    }
};