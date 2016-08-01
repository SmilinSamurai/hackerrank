class Student {
    private:
    int scores[5];
    int totalScore = 0;

    public:
    void input () {
        for (int i = 0; i < 5; ++i) {
            cin >> scores[i];
        }
    }
    int calculateTotalScore() {
        for (int i = 0; i < 5; ++i) {
            totalScore = totalScore + scores[i];
        }
        return totalScore;
    }
};
