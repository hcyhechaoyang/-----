#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="12345";
    /*1.在C++中，std::string类提供了一个成员函数cstr() 用于返回一个指向以空字符结尾的C风格字符串(即const char*类型)
    在进行printf输出时，需要将string转换为C风格的字符进行输出。*/
    printf("str==%s\n",str.c_str());

    //2.获取字符串长度
    int length1 = str.length();
    cout<<length1<<endl;
    int length2 = str.size();
    cout<<length2<<endl;
    //3.拼接字符串
    string str2="123333";
    /*字符+*/
    string str3=str+str2;//或者str+","+str2
    //使用append()函数
    string str4=str3.append("wwww");//或者str3.append(str2)
    cout<<str2<<endl;
    cout<<str3<<endl;
    cout<<str4<<endl;
    //3.字符串查找
    size_t pos = str4.find("wwww");
    if (pos != string::npos) {
        cout << pos << endl;
    } else {
        cout<< "Not Found!" << endl;
    }
    //4.字符串替换
    string str6="99999";
    //replace(字符串起始位置,替换长度,替换字符串);
    str2.replace(2,str6.size(),str6);
    cout<<str2<<endl;

  
    


}