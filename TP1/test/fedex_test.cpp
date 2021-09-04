#include <gtest/gtest.h>
#include <string>

#include "../src/Fedex.h"

namespace {
    TEST(FedexTests, FedexTest_ToString_Test) {
        Fedex envio = envio(2.9,1,200);
        std::string total = envio.ToString();
        EXPECT_EQ("(39)", total);
    }
    TEST(FedexTests, FedexTest_ToString_Test) {
        Fedex envio = envio(4.9,1,200);
        std::string total = envio.ToString();
        EXPECT_EQ("(90)", total);
    }
    TEST(FedexTests, FedexTest_ToString_Test) {
        Fedex envio = envio(11.25,1,200);
        std::string total = envio.ToString();
        EXPECT_EQ("(100)", total);
    }
    TEST(FedexTests, FedexTest_ToString_Test) {
        Fedex envio = envio(2.9,2,200);
        std::string total = envio.ToString();
        EXPECT_EQ("(3.9)", total);
    }
    TEST(FedexTests, FedexTest_ToString_Test) {
        Fedex envio = envio(4.9,2,200);
        std::string total = envio.ToString();
        EXPECT_EQ("(9)", total);
    }
    TEST(FedexTests, FedexTest_ToString_Test) {
        Fedex envio = envio(11.25,2,200);
        std::string total = envio.ToString();
        EXPECT_EQ("(10)", total);
    }
    TEST(FedexTests, FedexTest_ToString_Test) {
        Fedex envio = envio(2.9,3,200);
        std::string total = envio.ToString();
        EXPECT_EQ("(3)", total);
    }
    TEST(FedexTests, FedexTest_ToString_Test) {
        Fedex envio = envio(4.9,3,200);
        std::string total = envio.ToString();
        EXPECT_EQ("(3.2)", total);
    }
    TEST(FedexTests, FedexTest_ToString_Test) {
        Fedex envio = envio(11.25,3,200);
        std::string total = envio.ToString();
        EXPECT_EQ("(3.4)", total);
    }
    


}