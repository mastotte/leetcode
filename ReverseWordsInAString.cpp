class Solution {
public:
    string removeSpaces(string s){
        string d = "  ";
        string e = " ";
        bool cont = true;
        size_t index = 0;
        while(cont){
            index = s.find(d);
            if(index == string::npos){
                cont = false;
            }else{
                s.replace(index, 2, e);
            }
        }
        int begin = s.find_first_not_of(" ");
        int end = s.find_last_not_of(" ");
        s = s.substr(begin,end+1);
        return s;
    }
    string reverseWords(string s) {
        s = removeSpaces(s);
        string n = "";
        stringstream stream(s);
        string inter;
        getline(stream, inter, ' ');
        n = inter;
        while(getline(stream, inter, ' ')){
            n.insert(0,inter+" ");
        }
        return n;
    }
};