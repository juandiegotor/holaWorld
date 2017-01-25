#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE hola

#include <string>
#include <boost/test/included/unit_test.hpp>
#include "../src/hola.hpp"

BOOST_AUTO_TEST_CASE(test)
{
	BOOST_CHECK(hello("jojo") == "hello world jojo");
	BOOST_CHECK(hello("KOKO") == "hello world KOKO");
	BOOST_CHECK(hello("pepe") == "hello world pepe");
	BOOST_CHECK(hello("machu pichu") == "hello world machu pichu");

}