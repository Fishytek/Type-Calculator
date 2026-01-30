#include "calculator.h"
#include <cmath>
Calculator::Calculator(){
    current_number_ = 0;
    memory_ = 0;
}
void Calculator::Set(Number n){
    current_number_ = n;
}
double Calculator::GetNumber() const{
    return current_number_;
}
void Calculator::Add(Number n) {
    current_number_ += n;
}
void Calculator::Sub(Number n){
    current_number_ -= n;
}
void Calculator::Div(Number n){
    current_number_ /= n;
}
void Calculator::Mul(Number n){
    current_number_ *= n;
}
void Calculator::Pow(Number n){
    current_number_ = pow(current_number_, n);
}
void Calculator::Save(){
    memory_ = current_number_;
}
void Calculator::Load(){
    current_number_ = memory_;
}
bool Calculator::HasMem() const{
    return memory_ != 0;
}
std::string Calculator::GetNumberRepr() const {
    return std::to_string(current_number_);
}
