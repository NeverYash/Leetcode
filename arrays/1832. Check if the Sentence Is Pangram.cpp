class Solution {
public:
    bool checkIfPangram(string sentence) {
        const int CHAR = 26;
        int arr[CHAR];
        fill(arr,arr+CHAR,0);
        for(int i=0;i<sentence.length();i++){
            arr[sentence[i]-'a']++;
        }
        for(int i=0;i<CHAR;i++){
            if(arr[i]==0)
            return false;
        }
        return true;
    }
};
