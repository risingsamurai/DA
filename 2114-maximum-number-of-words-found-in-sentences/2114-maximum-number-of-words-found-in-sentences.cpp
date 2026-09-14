class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;

        for (int i = 0; i < sentences.size(); i++) {
            int words = 1;
          for (char c : sentences[i]) {
                if (c == ' ') {
                    words++;
              }
            }

            maxWords = max(maxWords, words);
        }

        return maxWords;
    }
};