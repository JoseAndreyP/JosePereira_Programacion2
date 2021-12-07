#include <gtest/gtest.h>
#include "../src/Fedex.h"

namespace {
    //Costo minimo
    TEST(FedexTest1, FedexTest_Enviando_Test2_200) {
        Fedex envio = Fedex(2,20);
        double total = envio.calcularCosto();
        double expected=20.0;
        double diferencia= std:: abs (total-expected);
        bool aceptable= diferencia<0.00001;
        EXPECT_EQ(true, aceptable);
    }
    //Envio pesado
    TEST(FedexTest2, FedexTest_Enviando_Test4_200) {
        Fedex envio = Fedex(4.9,200);
        double total = envio.calcularCosto();
        double expected=23.0;
        double diferencia= std:: abs (total-expected);
        bool aceptable= diferencia<0.00001;
        EXPECT_EQ(true, aceptable);
    }
    //Distancia larga
    TEST(FedexTest3, FedexTest_Enviando_Test2_200) {
        Fedex envio = Fedex(2.2,600);
        double total = envio.calcularCosto();
        double expected=25.0;
        double diferencia= std:: abs (total-expected);
        bool aceptable= diferencia<0.00001;
        EXPECT_EQ(true, aceptable);
    }
    //Maximo costo
        TEST(FedexTest4, FedexTest_Enviando_Test4_500) {
        Fedex envio = Fedex(4.8,600);
        double total = envio.calcularCosto();
        double expected=28.0;
        double diferencia= std:: abs (total-expected);
        bool aceptable= diferencia<0.01;
        EXPECT_EQ(true, aceptable);
    }
}