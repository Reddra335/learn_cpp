#include <iostream>

int main(){


int hari;



while(hari) {


    if (hari == 0){
        break;
    }
    std::cout<<"masukkan hari ke: ";
std::cin>>hari;
    switch(hari){
    case 1:
    std::cout<<"masuk sekolah cuy"<<std::endl;
    break;
    case 2:
    std::cout<<"masuk sekolah cuy"<<std::endl;
    break;
    default:
    std::cout<<"Invalid"<<std::endl;
}
}







    return 0;
}