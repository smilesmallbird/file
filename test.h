//
// Created by jack on 2020/11/6.
//
#include <string>
#include <iostream>
struct fruit {
    int id;
    std::string name;
    double weight;
    float life;
    std::string howto1;
    std::string howto2;
};

fruit apple = {345,"apples",123,5,"howto1","howto2"};


int lucky(int age, bool mate, int city, int money, bool car){
    int mates;
    int citys;
    int moneys;
    int cars;

    if(age > 60){
        age = 0;
    } else if(age > 50){
        age = 8;
    } else if(age > 40){
        age = 15;
    } else if(age > 30){
        age = 16;
    } else if(age > 20){
        age = 20;
    } else if(age >0){
        age =0;
    }

    if(mate = 1){
        int mates = 20 ;
    }else{
        int mates = 0;
    }

    if(city = 0){
        int city = 9;
    }else{
        int city = 0;
    }

    if(money > 100){
        int moneys = 56;
    }else{
        int moneys = 0;
    }

    if(car = 0){
        int cars = 10;
    }else{
        int cars = 0;
    }

    int total = age + mates + citys + moneys + cars;
    return total;
}
#ifndef UNTITLED1_TEST_H
#define UNTITLED1_TEST_H

//类函数啊
class stock
        {
private:
    int id;
    std::string name;
    double num1;
    double num2;
    int num4;
    double future = ( num1 + num2 ) / num4;
    int ourid = id + 99;
public:
    void show_future(){
        std::cout << "hello,welcome to my stock,your fuure is: " << future << std::endl;
    }
    void show_newid(){
        std::cout << "Your new id is: " << ourid << std::endl;
    }
};
#endif //UNTITLED1_TEST_H
