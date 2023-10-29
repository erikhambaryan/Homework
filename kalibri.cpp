#include <iostream>



int main(int argc, char* argv[]){
        for(int o=argc-1; o>0; o--){
            std::cout<<argv[o]<<" ";
        }
            std::cout<<std::endl;
            return 0;
}
