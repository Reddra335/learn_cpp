#include <iostream>
#include <string>


int main(){

std::string names[10]={"Rendi","Ucin","Master"};

// int num= sizeof(names)/sizeof(names[0]);


// for(int i=0; i<num;i++){

//     std::cout<<names[i]<<std::endl;
// }

for(std::string result:names){
    std::cout<<result<<std::endl;
}

    return 0;
}
