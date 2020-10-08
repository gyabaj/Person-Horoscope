#include "person.h"


namespace PERSON
{
     Person::Person() : fName(""), lName(""), bYear(0), bMonth(0), bDay(0){}
     Person::Person(std::string fN, std::string lN, int bY, int bM, int bD) :
                    fName(fN), lName(lN), bYear(bY), bMonth(bM), bDay(bD){}
     Person::Person(const Person &p) : fName(p.fName), lName(p.lName),
                                     bYear(p.bYear), bMonth(p.bMonth), bDay(p.bDay){}
     Person::~Person(){}

     std::string Person::Get_Year_Horoscope() const
     {
       switch(bYear % 12)
       {
         case 0:   return "Monkey";
         case 1:   return "Rooster";
         case 2:   return "Dog";
         case 3:   return "Pig";
         case 4:   return "Rat";
         case 5:   return "Ox";
         case 6:   return "Tiger";
         case 7:   return "Rabbit";
         case 8:   return "Dragon";
         case 9:   return "Snake";
         case 10:  return "Horse";
         case 11:  return "Ram";
         default:  return "Not available value";

       }
     }
std::string Person::Get_Month_Horoscope() const
     {
        if((bMonth == 1 && bDay >=21) || (bMonth == 2 && bDay <= 18))
          return "Aquarius";
        else if((bMonth == 2 && bDay >=19) || (bMonth == 3 && bDay <= 20))
          return "Pisces";
        else if((bMonth == 3 && bDay >=21) || (bMonth == 4 && bDay <= 20))
          return "Aries";
        else if((bMonth == 4 && bDay >=21) || (bMonth == 5 && bDay <= 20))
          return "Taurus";
        else if((bMonth == 5 && bDay >=21) || (bMonth == 6 && bDay <= 21))
          return "Gemini";
        else if((bMonth == 6 && bDay >=22) || (bMonth == 7 && bDay <= 22))
          return "Cancer";
        else if((bMonth == 7 && bDay >=23) || (bMonth == 8 && bDay <= 23))
          return "Leo";
        else if((bMonth == 8 && bDay >=24) || (bMonth == 9 && bDay <= 23))
          return "Virgo";
        else if((bMonth == 9 && bDay >=24) || (bMonth == 10 && bDay <= 23))
          return "Libra";
        else if((bMonth == 10 && bDay >=24) || (bMonth == 11 && bDay <= 22))
          return "Scorpio";
        else if((bMonth == 11 && bDay >=23) || (bMonth == 12 && bDay <= 21))
          return "Sagittarius";
        else if((bMonth == 12 && bDay >=22) || (bMonth == 1 && bDay <= 20))
          return "Capricorn";
        else
          return "Not available Values";
     }
}
