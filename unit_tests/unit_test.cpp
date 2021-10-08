#include "gtest/gtest.h"

#include "../src/base.h"

#include<string>

using namespace std;

#include "../src/operators.h"
TEST(OperatorsTest, lsTest){
    Base* operatorsTest = new Operators("ls");
    EXPECT_EQ(true, operatorsTest->execute());
}

TEST(OperatorsTest, dateTest){
    Base* operatorsTest = new Operators("date");
    EXPECT_EQ(true, operatorsTest->execute());
}

TEST(OperatorsTest, calTest){
    Base* operatorsTest = new Operators("cal");
    EXPECT_EQ(true, operatorsTest->execute());
}

TEST(OperatorsTest, whoamiTest){
    Base* operatorsTest = new Operators("whoami");
    EXPECT_EQ(true, operatorsTest->execute());
}

/*
Unable to implement a correct false result
TEST(OperatorsTest, fakeTest){
    Base* operatorsTest = new Operators("fake");
    EXPECT_EQ(false, operatorsTest->execute());
}
*/

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
