#include <gtest/gtest.h>
#include <string>

#include "../src/Postal.h"

namespace {
    TEST(PostalTest, PostalTest_ToString_Test) {
        Postal envio = envio(2,200);
        std::string total = envio.ToString();
        EXPECT_EQ("(20)", total);
    }
    TEST(PostalTest, PostalTest_ToString_Test) {
        Postal envio = envio(4.9,200);
        std::string total = envio.ToString();
        EXPECT_EQ("(23)", total);
    }
    TEST(PostalTest, PostalTest_ToString_Test) {
        Postal envio = envio(4.8,500);
        std::string total = envio.ToString();
        EXPECT_EQ("(28)", total);
    }
    TEST(PostalTest, PostalTest_ToString_Test) {
        Postal envio = envio(2.2,200);
        std::string total = envio.ToString();
        EXPECT_EQ("(25)", total);
    }
}