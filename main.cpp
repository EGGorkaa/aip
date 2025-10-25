#include <iostream>
#include <climits>
#include <cstdlib>

bool isPyth(unsigned a, unsigned b, unsigned c);

int main(){
  using u_t = unsigned;
  u_t a = 0, b = 0, c = 0;
  size_t count = 0;
  std::cin >> b >> c;
  while (std::cin>>a){
    count+=isPyth(a, b, c) ? 1 : 0;
    c=b;
    b=a;
  }
  if(std::cin.eof()){
    std::cout << count;
    std::cout << "\n";
  }
  else if (std::cin.fail()){
    std::cerr << "input err\n";
    return 1;
  }
}

bool isPyth (unsigned a, unsigned b, unsigned c){
  if (a > 0 && a > UINT_MAX / a){
    std::cerr << "overflow error\n"; std::exit(2);
  }
  if (b > 0 && b > UINT_MAX / b){
    std::cerr << "overflow error\n"; std::exit(2);
  }
  if (c > 0 && c > UINT_MAX / c){
    std::cerr << "overflow error\n"; std::exit(2);
  }
  bool p = a*a==(b*b+c*c);
  p = p||b*b==(a*a+c*c);
  p = p||c*c==(a*a+b*b);
  return p;
}
