//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Write the assignment code here
#include <iostream>


class Real {
  private:
    double n{};
    double r{};

  public:
    Real(double GetReal)
      : n{GetReal}

  Real operator * (double n)
  {
      Real temp;
      new.n = n + Real.n;
      new.r = r + Real.r; 
      return temp; 
  }
}; 


class Complex : public Real{ 
  private:
    double Imag1{};

  public:
    Complex (double GetImaginary);
    double GetReal{};

Complex operator * (double Imag1)
  {
      Complex temp;
      new.Imag1 = GetImaginary + Complex.GetImaginary;
      new.Imag1 = r + Complex.r; 
      return temp; 
  }


};

class Surreal : public Real, public Complex
{
    private:
    double Surr{};

  public:
    Surreal (double GetSurreal);
    double GetReal{};
    double GetImaginary{};

Surreal operator * (double Surr)
  {
      Surreal temp;
      new.Surr = GetSurreal + Surreal.GetSurreal;
      new.r = r + Surreal.r; 
      return temp; 
  }


}; 

{
    // Why this operator defined within the constructor function body? 
    // not sure where to put this trying to follow textbook for where these go. Where should this go?
    
  
}
//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "c1" ) {
        Real n{10.0};
        REQUIRE( n.GetReal() == 10.0 );
    }
    SECTION( "c2" ) {
        Complex n{10.0, 20.0};
        REQUIRE( n.GetReal() == 10.0 );
        REQUIRE( n.GetImaginary() == 20.0 );
    }
    SECTION( "c3" ) {
        Surreal n{10.0, 20.0, 30.0};
        REQUIRE( n.GetReal() == 10.0 );
        REQUIRE( n.GetImaginary() == 20.0 );
        REQUIRE( n.GetSurreal() == 30.0 );
    }
    SECTION( "a1" ) {
        Real n{10.0};
        Real r = n * 2.0;
        REQUIRE( r.GetReal() == 20.0 );
    }
    SECTION( "a2" ) {
        Complex n{10.0, 20.0};
        Complex r = n * 2.0;
        REQUIRE( r.GetReal() == 20.0 );
        REQUIRE( r.GetImaginary() == 40.0 );
    }
    SECTION( "a3" ) {
        Surreal n{10.0, 20.0, 30.0};
        Surreal r = n * 2.0;
        REQUIRE( r.GetReal() == 20.0 );
        REQUIRE( r.GetImaginary() == 40.0 );
        REQUIRE( r.GetSurreal() == 60.0 );
    }
}
//------------------------------
