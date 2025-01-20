class Solution {
public:
    int hIndex(vector<int>& citations) {
        int papers_amount = 0;
        int h = 0;

        if(citations.size() == 1){
            return min(1, citations[0]);
        }
        for(int i = 1; i <= citations.size(); i++){
            papers_amount = 0;

            // verify that array passes h index for {i}
            for(int j = 0; j < citations.size(); j++){
                if(citations[j] >= i){
                    papers_amount += 1;
                }
            }
            if(papers_amount >= i){
                h = i;
            }
        }
        return h;
    }
};