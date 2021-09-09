#include <gtest/gtest.h>
#include "../src/Fedex.h"

namespace {
    TEST(FedexTest, FedexTest_Enviando_Test2_2000) {
        Fedex envio = Fedex(2,200);
        double total = envio.enviar();
        double expected=20.0;
        double diferencia= std:: abs (total-expected);
        bool aceptable= diferencia<0.00001;
        EXPECT_EQ(true, aceptable);
    }
    TEST(FedexTest, FedexTest_Enviando_Test4_200) {
        Fedex envio = Fedex(4.9,200);
        double total = envio.enviar();
        double expected=23.0;
        double diferencia= std:: abs (total-expected);
        bool aceptable= diferencia<0.00001;
        EXPECT_EQ(true, aceptable);
    }
    TEST(FedexTest, FedexTest_Enviando_Test4_500) {
        Fedex envio = Fedex(4.8,500);
        double total = envio.enviar();
        double expected=28.0;
        double diferencia= std:: abs (total-expected);
        bool aceptable= diferencia<0.00001;
        EXPECT_EQ(true, aceptable);
    }
    TEST(FedexTest, FedexTest_Enviando_Test2_200) {
        Fedex envio = Fedex(2.2,200);
        double total = envio.enviar();
        double expected=25.0;
        double diferencia= std:: abs (total-expected);
        bool aceptable= diferencia<0.00001;
        EXPECT_EQ(true, aceptable);
    }
}