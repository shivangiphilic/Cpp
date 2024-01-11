#include <iostream>
using namespace std;
class mu;    //forward declaration
class mat
{
    int a[10][10],prod[10][10],r,c,m;
    public:
        void read();
        void display();
        void mult(mu mult);
};

class mu
{
    public:
        int mult;
        int get_mult();
        friend void mat::mult(mu mult);
};

int mu::get_mult()
{
    int mult;
    cout << "Enter multiplier: ";
    cin >> mult;
    return mult;
}

void mat::read()
{
    int i,j;
    cout << "No. of rows in matrix: ";
    cin >> r;
    cout << "No. of coloum in matrix: ";
    cin >> c;
    cout << "Enter elements: \n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cin >> a[i][j];
    }
}

void mat::display()
{
    int i,j;
    cout << "Elements are: \n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cout << a[i][j] << " ";
    }
    cout << "\n";
}

void mat::mult(mu mult)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            prod[i][j] = (mult.mult)*(a[i][j]);
    }
}

int main()
{
    mat a,prod;
    mu multiplier;
    multiplier.get_mult();
    a.read();
    cout << "\nEntered matrix: \n";
    a.display();
    a.mult(multiplier);
    cout << "\nFinal matrix: \n";
    prod.display();

}
