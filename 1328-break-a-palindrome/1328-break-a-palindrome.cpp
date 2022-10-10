class Solution {
public:
 string breakPalindrome(string p) {
  if(p.length() == 1)
  {
      return "";
  }
  int l = p.length();
  bool changed = false;
  for(int i = 0;i < l; i++)
  {
      if(p[i] != 'a' && i != l/2)
      {
          p[i] = 'a';
          changed = true;
          break;
      }
  }
  if(!changed)
  {
      p[l-1] = 'b';
  }
  return p;
  }
};