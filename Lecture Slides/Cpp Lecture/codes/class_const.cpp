return_type functionName() const;

int getData() const;

class Counter {
public:
    int getCount() const {
        return count;
    }
    void setCount(int newCount) {
        count = newCount;
    }
    void incrementCount() {
        ++count; }
private:
    int count; // counter value
};

void func() {
    Counter Obj;    // create object from Counter
    Obj.setCount(0);    // set count
    std::cout << Obj.getCount(); // print a consts

}