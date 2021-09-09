#include <gtest/gtest.h>
#include "../src/Postal.h"

namespace {
    TEST(PostalTests, PostalTest_Enviando_Test) {
        Postal envio = Postal(2.9,1,200);
        double total = envio.enviar();
        double expected=39.0;
        double diferencia= std:: abs (total-expected);
        bool aceptable= diferencia<0.00001;
        EXPECT_EQ(true, aceptable);
    }
    TEST(PostalTests, PostalTest_Enviando_Test5_1_200) {
        Postal envio = Postal(4.9,1,200);
        double total = envio.enviar();
        double expected=90.0;
        double diferencia= std:: abs (total-expected);
        bool aceptable= diferencia<0.00001;
        EXPECT_EQ(true, aceptable);
    }
    TEST(PostalTests, PostalTest_Enviando_Test11_1_200) {
        Postal envio = Postal(11.25,1,200);
        double total = envio.enviar();
        double expected=100.0;
        double diferencia= std:: abs (total-expected);
        bool aceptable= diferencia<0.00001;
        EXPECT_EQ(true, aceptable);
    }
    TEST(PostalTests, PostalTest_Enviando_Test3_2_200) {
        Postal envio = Postal(2.9,2,200);
        double total = envio.enviar();
        double expected=3.9;
        double diferencia= std:: abs (total-expected);
        bool aceptable= diferencia<0.00001;
        EXPECT_EQ(true, aceptable);
    }
    TEST(PostalTests, PostalTest_Enviando_Test5_2_200) {
        Postal envio = Postal(4.9,2,200);
        double total = envio.enviar();
        double expected=9.0;
        double diferencia= std:: abs (total-expected);
        bool aceptable= diferencia<0.00001;
        EXPECT_EQ(true, aceptable);
    }
    TEST(PostalTests, PostalTest_Enviando_Test11_2_200) {
        Postal envio = Postal(11.25,2,200);
        double total = envio.enviar();
        double expected=10.0;
        double diferencia= std:: abs (total-expected);
        bool aceptable= diferencia<0.00001;
        EXPECT_EQ(true, aceptable);
    }
    TEST(PostalTests, PostalTest_Enviando_Test3_3_200) {
        Postal envio = Postal(2.9,3,200);
        double total = envio.enviar();
        double expected=3.0;
        double diferencia= std:: abs (total-expected);
        bool aceptable= diferencia<0.00001;
        EXPECT_EQ(true, aceptable);
    }
    TEST(PostalTests, PostalTest_Enviando_Test5_3_200) {
        Postal envio = Postal(4.9,3,200);
        double total = envio.enviar();
        double expected=3.0;
        double diferencia= std:: abs (total-expected);
        bool aceptable= diferencia<0.00001;
        EXPECT_EQ(true, aceptable);
    }
    TEST(PostalTests, PostalTest_Enviando_Test11_3_200) {
        Postal envio = Postal(11.25,3,200);
        double total = envio.enviar();
        double expected=3.4;
        double diferencia= std:: abs (total-expected);
        bool aceptable= diferencia<0.00001;
        EXPECT_EQ(true, aceptable);
    }    
}
