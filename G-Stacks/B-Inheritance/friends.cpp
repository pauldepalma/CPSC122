#include <iostream>
using namespace std;
class A {
private:
    int secret = 123;

    friend class Logger;  // Logger can access secret
};

class Logger {
public:
    void log(const A& a) {
        cout << a.secret << "\n";  // allowed
    }
};

int main() {
    A obj;
    Logger log;
    log.log(obj);
}