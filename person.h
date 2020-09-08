#pragma once
#include <iostream>
#include <string>
#include <vector>

namespace PERSON
{


   class Person
   {
     private:
       std::string fName;
       std::string lName;
       int bYear;
       int bMonth;
       int bDay;

     public:
       Person();
       Person(std::string fN, std::string lN, int bY, int bM, int bD);
       Person(const Person &p);
       ~Person();

       std::string Get_Month_Horoscope();
       std::string Get_Year_Horoscope();

   };

}
