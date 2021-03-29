#include<iostream>
#include<cstring>
using namespace std;

class String{
    private:
    	char * str;
    public:
    	String():str(new char[1]){str[0] = 0;}
    	~String(){delete [] str;}
    	const char * c_str(){return str;}
    	String & operator=(const char * s);
};

// ���ظ�ֵ�����ʹ�� String s; s = "hello"; �ܹ�����
String & String::operator=(const char * s){
    delete [] str; // ����յ�ǰ����� str
    str = new char[strlen(s)+1]; // �����ܹ��洢�ַ��� s �Ŀռ�
    strcpy(str,s);
    return * this;
}

int main(){
    String s;
    s = "hello, world"; // ���� s.operator=("hello,world")
    // String s2 = "hello"; ����ĵȺ��ǳ�ʼ�����Ǹ�ֵ������ù��캯�����г�ʼ�����ȼ��� String s2("hello"); ���û�ж��������Ĺ��캯���ᵼ�³������
    cout<<s.c_str()<<endl;
    return 0;
}
