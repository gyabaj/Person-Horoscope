#include "person.h"


int main()
{
  int n{};
  int bYear{};
  int bMonth{};
  int bDay{};
  std::string fName{};
  std::string lName{};
  std::vector<PERSON::Person> p{};

  std::cin >> n;

  for(int i = 0; i < n; ++i)
  {
    std::cin >> fName >> lName >> bYear >> bMonth >> bDay;
    PERSON::Person temp{fName, lName, bYear, bMonth, bDay};
    p.push_back(temp);
  }
  for(size_t i = 0; i < p.size(); ++i)
  {
    std::cout << p[i].Get_Year_Horoscope() << ", "
              << p[i].Get_Month_Horoscope()  << "\n";
  }
}
