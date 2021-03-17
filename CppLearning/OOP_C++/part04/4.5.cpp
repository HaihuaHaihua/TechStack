#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Complex{
    // private:
    //  	double real,img;
    public:
        double real,img;
    	Complex(double r=0.0, double i=0.0):real(r),img(i){}
    	friend ostream & operator<<(ostream & os, const Complex & c);
    	friend istream & operator>>(istream & is, const Complex & c);
};

ostream & operator<<(ostream & os, const Complex & c){
    os<<c.real<<'+'<<c.img<<'i';
    return os;
}

istream & operator>>(istream & is, Complex & c){
    string s;
    is >> s; // ��"a+bi"��Ϊ�ַ������룬"a+bi"�м䲻���пո�
    int pos = s.find('+',0);
    string sTmp = s.substr(0,pos); // �����ʵ�����ַ���
    c.real = atof(sTmp.c_str()); // atof�⺯���ܽ�const char*ָ��ָ�������ת��Ϊfloat
    sTmp = s.substr(pos+1,s.length()-pos-2);
    c.img = atof(sTmp.c_str());
    return is;
}

int main(){
    Complex c;
    int n;
    cin >> c >> n;
    cout << c <<','<<n;
    return 0;
}
