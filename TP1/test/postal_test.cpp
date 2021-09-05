#include <gtest/gtest.h>
#include <string>

#include "../src/Postal.h"

namespace {
    TEST(PostalTests, PostalTest_ToString_Test) {
        Postal envio = Postal(2.9,1,200);
        double total = envio.enviar();
        EXPECT_EQ(39.0, total);
    }
    TEST(PostalTests, PostalTest_ToString_Test) {
        Postal envio = Postal(4.9,1,200);
        double total = envio.enviar();
        EXPECT_EQ(90.0, total);
    }
    TEST(PostalTests, PostalTest_ToString_Test) {
        Postal envio = Postal(11.25,1,200);
        double total = envio.enviar();
        EXPECT_EQ(100.0, total);
    }
    TEST(PostalTests, PostalTest_ToString_Test) {
        Postal envio = Postal(2.9,2,200);
        double total = envio.enviar();
        EXPECT_EQ(3.9, total);
    }
    TEST(PostalTests, PostalTest_ToString_Test) {
        Postal envio = Postal(4.9,2,200);
        double total = envio.enviar();
        EXPECT_EQ(9.0, total);
    }
    TEST(PostalTests, PostalTest_ToString_Test) {
        Postal envio = Postal(11.25,2,200);
        double total = envio.enviar();
        EXPECT_EQ(10.0, total);
    }
    TEST(PostalTests, PostalTest_ToString_Test) {
        Postal envio = Postal(2.9,3,200);
        double total = envio.enviar();
        EXPECT_EQ(3.0, total);
    }
    TEST(PostalTests, PostalTest_ToString_Test) {
        Postal envio = Postal(4.9,3,200);
        double total = envio.enviar();
        EXPECT_EQ(3.0, total);
    }
    TEST(PostalTests, PostalTest_ToString_Test) {
        Postal envio = Postal(11.25,3,200);
        double total = envio.enviar();
        EXPECT_EQ(3.4, total);
    }    
}