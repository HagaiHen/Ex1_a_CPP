/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Hagai Hen>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "mat.hpp"
using namespace ariel;

#include <string>
#include <algorithm>

using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */

// NULL cases

TEST_CASE("Good input") { //add vaild
	CHECK(mat(9, 7, '@', '-') == "@@@@@@@@@\n@-------@\n@-@@@@@-@\n@-@---@-@\n@-@@@@@-@\n@-------@\n@@@@@@@@@");
	CHECK(mat(3, 3, '#', '-') == "###\n#-#\n###");
	CHECK(mat(5, 5, '$', '@') == "$$$$$\n$@@@$\n$@$@$\n$@@@$\n$$$$$");
    CHECK(mat(7, 9, '$', '-') == "$$$$$$$\n$-----$\n$-$$$-$\n$-$-$-$\n$-$-$-$\n$-$-$-$\n$-$$$-$\n$-----$\n$$$$$$$");
	CHECK(mat(7, 5, '&', '-') == "&&&&&&&\n&-----&\n&-&&&-&\n&-----&\n&&&&&&&");
}

TEST_CASE("even numbers") {
    CHECK_THROWS(mat(10, 5, '$', '-'));
    CHECK_THROWS(mat(7, 8, '@', '*'));
    CHECK_THROWS(mat(4, 6, '#', '-'));
    CHECK_THROWS(mat(4, 4, '$', '-'));
    CHECK_THROWS(mat(6, 8, '*', '-'));
    CHECK_THROWS(mat(10, 6, '@', '-'));
    CHECK_THROWS(mat(2, 8, '&', '-'));
}

TEST_CASE("negative numbers") {
    CHECK_THROWS(mat(-1, 5, '$', '-'));
    CHECK_THROWS(mat(7, -9, '@', '*'));
    CHECK_THROWS(mat(-7, -5, '*', '-'));
    CHECK_THROWS(mat(-11, -7, '&', '-'));
    CHECK_THROWS(mat(-21, -9, '#', '-'));
    CHECK_THROWS(mat(-17, 5, '$', '-'));
}

TEST_CASE("Zero") {
    CHECK_THROWS(mat(0, 7, '@', '-'));
    CHECK_THROWS(mat(5, 0, '$', '-'));
    CHECK_THROWS(mat(0, 0, '#', '-'));
    CHECK_THROWS(mat(3, 0, '*', '-'));
    CHECK_THROWS(mat(0, 9, '*', '-'));
}