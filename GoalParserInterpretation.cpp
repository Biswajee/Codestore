class Solution {
public:
    string interpret(string command) {
        string result = "";
        for(int i=0; i<command.length(); i++) {
            if(command[i] == 'G') result+='G';
            else if(command[i]=='(') {
                if(command[i+1]=='a' && command[i+2]=='l') {
                    result+="al";
                    i+=3;
                }
                else if(command[i+1]==')') {
                    result+='o';
                    i++;
                }
            }
        }
        return result;
    }
};