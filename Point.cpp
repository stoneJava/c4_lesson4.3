//
// Created by dslht on 2016/8/6.
//

#include <iostream>

using namespace std;

class Point {
private:
    int x, y;
public:
    void Setxy(int a, int b) {
        x = a;
        y = b;
    }

    void Move(int a, int b) {
        x = x + a;
        y = y + b;
    }

    void Display() {
        cout << x << "," << y << endl;
    }

    int Getx() {
        return x;
    }

    int Gety() {
        return y;
    }


};
void print(Point *a) {
    a->Display();
}

void print(Point &a){
    a.Display();
}
int main(int argc ,char* argv[]){
   /* cout << argc << endl;
    cout << argv[0] << endl;*/
    Point A , B, *p;
    Point &RA = A;
    A.Setxy(25, 55);
    B = A;  //赋值，修改B时A不会发生变化，修改A时B不的值不会发生变化
    p = &B;
    p->Setxy(112, 115);
    print(p);
    p->Display();

    RA.Move(-80, 23);
    print(A);
    print(&A);

    return 0;
}
