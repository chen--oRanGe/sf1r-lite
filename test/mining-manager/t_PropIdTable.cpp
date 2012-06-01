///
/// @file t_PropIdTable.cpp
/// @brief test PropIdTable to store property value ids for each doc
/// @author Jun Jiang <jun.jiang@izenesoft.com>
/// @date Created 2012-05-31
///

#include "PropIdTableTestFixture.h"
#include <boost/test/unit_test.hpp>

BOOST_FIXTURE_TEST_SUITE(PropIdTableTest, sf1r::PropIdTableTestFixture)

BOOST_AUTO_TEST_CASE(checkPropId)
{
    checkIdList();

    appendIdList("123");
    appendIdList("");
    appendIdList("456 789");
    appendIdList("65535");
    appendIdList("65535 65534 65533");
    appendIdList("1 2 3 4 5 6 7 8 9");
    appendIdList("");
    appendIdList("");
    appendIdList("");
    appendIdList("9 7 5 3 1 2 4 6 8");

    checkIdList();
}

BOOST_AUTO_TEST_SUITE_END() 
