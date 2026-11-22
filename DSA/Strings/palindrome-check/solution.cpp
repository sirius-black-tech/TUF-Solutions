class Solution{	
	public:		
		bool palindromeCheck(string& s){
            string original=s;
			
            for(int i=0;i<s.size()/2;i++){
                int n=s.size();
                swap(s[i],s[n-i-1]);
            }
            if(original==s){
                return true;
            }else return false;
		}
};