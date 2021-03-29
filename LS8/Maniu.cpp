//
// Created by Administrator on 2020/11/7.
//

#include "include/Maniu.h"


int Maniu::getAge() {
    return age;
}

void Maniu::setAge(int age) {
    this->age = age;
    this++;
}
