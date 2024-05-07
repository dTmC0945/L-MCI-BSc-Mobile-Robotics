class FriendAccess {
public: int setValue(int value) { return value; }

private:
    friend void wasteTime();
    void doNothing() {}
    int secret_number; // data member
};

void wasteTime() {
    FriendAccess x;
    x.doNothing(); // OK: friend
    x.secret_number = 5; // OK: friend
}

int main() {
    FriendAccess x; // x is object of type Widget
    x.setValue(5);     // sets x.value to 5
    x.secret_number = 5; // ERROR: value is private
    x.doNothing(); // ERROR: doNothing is private
}