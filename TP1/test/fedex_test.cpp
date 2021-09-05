#include <gtest/gtest.h>
#include "../src/Fedex.h"

namespace {
    TEST(FedexTest, FedexTest_Enviando_Test) {
        Fedex envio = Fedex(2,200);
        double total = envio.enviar();
        EXPECT_EQ(20.0, total);
    }
    TEST(FedexTest, FedexTest_Enviando_Test) {
        Fedex envio = Fedex(4.9,200);
        double total = envio.enviar();
        EXPECT_EQ(23.0, total);
    }
    TEST(FedexTest, FedexTest_Enviando_Test) {
        Fedex envio = Fedex(4.8,500);
        double total = envio.enviar();
        EXPECT_EQ(28.0, total);
    }
    TEST(FedexTest, FedexTest_Enviando_Test) {
        Fedex envio = Fedex(2.2,200);
        double total = envio.enviar();
        EXPECT_EQ(25.0, total);
    }
}