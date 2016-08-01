class Matrix {
    public:
    vector<vector<int>> a;
    Matrix operator+(Matrix m) {
        Matrix first(*this);
        for(int i = 0; i < first.a.size(); i++) {
            for(int j = 0; j < first.a[i].size(); j++){
                first.a[i][j] += m.a[i][j];
            }
        }
        return (first);
    };
};
