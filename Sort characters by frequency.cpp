class Solution{
    private:
    // Line 3-8: Suggest renaming variables for clarity
    // Consider renaming parameters to provide more context after looking at the full function.
    static bool comparator(pair<int,char> characterFrequency1, pair<int,char> characterFrequency2){
        if(characterFrequency1.first > characterFrequency2.first) return true;
        if(characterFrequency1.first < characterFrequency2.first) return false;
        return characterFrequency1.second < characterFrequency2.second;
    }

    public:
    vector<char> frequencySort(string& inputString){
        pair<int, char> frequencyArray[26];

        for(int i=0; i < 26; i++){
            frequencyArray[i] = {0, i + 'a'};
        }

        for(char character : inputString){
            frequencyArray[character - 'a'].first++;
        }

        sort(frequencyArray, frequencyArray + 26, comparator);

        vector<char> sortedCharacters;
        for(int i = 0; i < 26; i++){
            if(frequencyArray[i].first > 0){
                sortedCharacters.push_back(frequencyArray[i].second);
            }
        }
        return sortedCharacters;
    }
};

