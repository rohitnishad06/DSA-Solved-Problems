class Solution {
public:
    string intToRoman(int num) {
        vector<int> val = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> rom = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

        string result = "";


        for(int i = 0; i < 13 ; i++ ){
            if(num == 0){
                break;
            }
            int times = num/val[i];

            // how many time add to ans and then decrease by 1 everytime
            while(times--){
                result += rom[i];
            }
            
            num = num % val[i];
        }
        return result;
    }
};