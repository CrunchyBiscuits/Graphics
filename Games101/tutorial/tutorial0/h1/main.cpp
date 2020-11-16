#include<cmath>
#include<iostream>
#include<eigen3/Eigen/Core>

int main(){
    // P(2,1)
    Eigen::Vector3f v(2.0f,1.0f,1.0f);
    std::cout<<"Original Point \n";
    std::cout<<v<<std::endl;

    Eigen::Matrix3f i,j;
    float cos45 = 1/(std::sqrt(2));
    // 45 rotation
    i<<cos45,-cos45,0,cos45,cos45,0,0,0,1;
    std::cout<<"After rotation \n";
    std::cout<<i*v<<std::endl;
    // translate
    j<<1,0,1,0,1,2,0,0,1;
    std::cout<<"After translate \n";
    std::cout<<j*i*v<<std::endl;

    return 0;

}