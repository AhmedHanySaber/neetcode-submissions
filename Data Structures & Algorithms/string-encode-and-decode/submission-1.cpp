class Solution {
public:
    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        ostringstream encoded;
        for (const string& s : strs) {
            encoded << s.size() << '#' << s;
        }
        return encoded.str();
    }
    
    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;
        while (i < s.size()) {
            // Read the length of the current string
            int delimiter_pos = s.find('#', i);
            int length = stoi(s.substr(i, delimiter_pos - i));
            i = delimiter_pos + 1; // Move past the '#'
            
            // Extract the actual string based on its length
            string str = s.substr(i, length);
            decoded.push_back(str);
            
            // Move i to the next position after the current string
            i += length;
        }
        return decoded;
    }
};
