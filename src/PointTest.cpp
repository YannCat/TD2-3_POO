#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Point.hpp"

using namespace std;

TEST_CASE( "Unit test for Point", "[classic]") {
	Point p1={1,1};
	Point p2={3,3};
	
    REQUIRE(Display(p1) == "(1,1)");
    REQUIRE(Display(InitPoint(1,1)) == "(1,1)");
    REQUIRE(Display(additionneur(p1,p2)) == "(4,4)");
    REQUIRE(Display(operation(p1, "p++")) == "(2,1)");
    REQUIRE(Display(operation(p1, "++p")) == "(1,2)");
    REQUIRE(Display(operation(p1, "p--")) == "(0,1)");
    REQUIRE(Display(operation(p1, "--p")) == "(1,0)");
    
}
