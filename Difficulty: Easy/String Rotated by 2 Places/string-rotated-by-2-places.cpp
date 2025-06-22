class Solution {
  public:
    bool isRotated(string s1, string s2) {
        if (s1.length() != s2.length()) return false;
        if (s1.length() < 2) return s1 == s2;

        // Clockwise: move last 2 characters to front
        string clockwise = s1.substr(s1.length() - 2) + s1.substr(0, s1.length() - 2);

        // Anticlockwise: move first 2 characters to end
        string anticlockwise = s1.substr(2) + s1.substr(0, 2);

        return (s2 == clockwise || s2 == anticlockwise);
    }
};
