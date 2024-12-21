/*Addition and Multiplication of 2 Complex Numbers */
#include <iostream> 
using namespace std;
class complex{
    public:
        int img = 0;
        int real = 0;
        complex()
        {
            cout<<real<<" + "<<img<<" i "<<endl;
        }
        complex operator +(complex b2){
            complex b3;
            b3.real=real+b2.real;
            b3.img=img+b2.img;
            return b3;
        }
        complex operator *(complex b2){
            complex b3;
            b3.real=(real*b2.real)-(img * b2.img);
            b3.img=(real*b2.img)+(img * b2.real);
            return b3;
        }
        friend istream & operator >> (istream &is,complex &b);
        friend ostream & operator << (ostream & os,complex &b);
};
istream & operator>>(istream &is,complex &b)
{   
     cout<<"Enter Real Part : ";
    is>>b.real;
    cout<<"Enter Imaginary Part : ";
    is>>b.img;
    return is;

}
ostream & operator<<(ostream & os ,complex &b)
{
    os<<b.real <<" + "<<b.img<<" i ";
    return os;
}
int main()
{
    complex c1,c2,c3,c4;
    cin>>c1;
    cin>>c2;
    c3=c1+c2;
    c4=c1*c2;
    cout<<"Sum is :"<< c3 <<endl;
    cout<<"Product is : "<<c4<<endl;

    return 0;
}
