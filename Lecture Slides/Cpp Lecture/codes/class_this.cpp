class MyClass {
public:
    int updateValue(int new_value) {
        int old_value = value;
        value = new_value;
        return old_value;
    }

private:
    int value;
};

void func() {
    MyClass x;
    x.updateValue(5);
// in Widget::updateValue, variable this equals &x
}