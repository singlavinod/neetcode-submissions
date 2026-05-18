class Solution:
    def encode(self, strs: List[str]) -> str:
        result = ""
        for str_ in strs:
            result += str(len(str_)) + "$" + str_
        return result

    def decode(self, s: str) -> List[str]:
        result = []
        if str != "":
            i = 0
            j = s.find("$")
            while(j < len(s) and j != -1):
                sslen = int(s[i:j])
                ss = s[j+1:j+1+sslen]
                result.append(ss)
                i = j+1+sslen
                j = s.find("$", j+1+sslen, -1)

        return result




        
        
