int main(){
  using u_t = unsigned;
  u_t a = 0;
  std::cin >> a;
  if(std::cin.eof()){
  std::cout << 0;
  std::cout << "\n";
  }
  esle if (std::cin.fail()){
  std::cerr << "input err\n";
  return 1;
  }
}
