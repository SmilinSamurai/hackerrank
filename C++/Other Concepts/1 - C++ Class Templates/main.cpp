template <typename Type> class AddElements {
public:
  AddElements(Type &elements1) { arr.push_back(elements1); }

  Type add(Type &elements2) {
    arr.at(0) += elements2;
    return arr.at(0);
  }

  Type concatenate(Type &elements2) {
    arr.at(0) += elements2;
    return arr.at(0);
  }

private:
  vector<Type> arr;
};
