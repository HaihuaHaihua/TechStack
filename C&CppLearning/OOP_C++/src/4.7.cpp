#include <iostream>

using namespace std;

class Sample{
private:
    int n;
public:
    Sample(int i=0):n(i){}
    Sample & operator++();
    Sample operator++(int);
    friend Sample & operator--(Sample & s);
    friend Sample operator--(Sample & s, int);
    operator int(){return n;}
};

Sample & Sample::operator++(){
    ++n;
    return * this;
}

Sample::Sample operator++(int){
    Sample tmp(*this); // ��¼�޸�ǰ�Ķ���
    n++;
    return tmp; // �����޸ĺ�Ķ���
}

Sample & operator--(Sample & s){
    s.n--;
    return s;
}

Sample operator--(Sample & s, int){
    Sample tmp(s);
    s.n--;
    return tmp;
}
