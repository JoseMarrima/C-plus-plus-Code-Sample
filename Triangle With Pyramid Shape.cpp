//Jose Jorge Do Amaral Marrima Matric: 20559
#include <iostream>
using namespace std;
class Triangle{
private:
    int row, count;
    int const EXTRA_SPACE = 15;
public:
    int col_height;
    Triangle();
    int get_Height();
    void printTriangle(int height);
};
int Triangle::get_Height(){
    cout << "What is the height of this pyramid shape?: ";
    cin >> col_height;
    return col_height;
}
Triangle::Triangle(){
   cout << "This program prints a 'pyramid' shape. \n";
}
void Triangle::printTriangle(int height)
{
    for (row = 1 ; row <= height ; row++)
    {
        int total_no_of_spaces = EXTRA_SPACE + height - row;
        for (count = 1 ; count <= total_no_of_spaces ; count++)
            cout << ' ';
        for (count = 2 ; count <= row * 2 ; count++)
            cout << '*';
        cout << endl;
    }
    cout << endl << endl;
}
int main()
{
    Triangle pyramid;
    pyramid.printTriangle(pyramid.get_Height());
    return 0;
}



