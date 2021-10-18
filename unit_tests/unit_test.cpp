#include "gtest/gtest.h"

#include "../src/base.h"

#include<string>

using namespace std;

#include "../src/command.h"
TEST(CommandTest, lsTest){
    Base* commandTest = new Command("ls");
    EXPECT_EQ(true, commandTest->execute());
}

TEST(CommandTest, dateTest){
    Base* commandTest = new Command("date");
    EXPECT_EQ(true, commandTest->execute());
}

TEST(CommandTest, calTest){
    Base* commandTest = new Command("cal");
    EXPECT_EQ(true, commandTest->execute());
}

TEST(CommandTest, whoamiTest){
    Base* commandTest = new Command("whoami");
    EXPECT_EQ(true, commandTest->execute());
}

TEST(CommandTest, lsflagTest){
    Base* commandTest = new Command("ls -a");
    EXPECT_EQ(true, commandTest->execute());
}


//Unable to implement a correct false result
TEST(CommandTest, fakeTest){
    Base* commandTest = new Command("fake");
    EXPECT_EQ(false, commandTest->execute());
}


int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
