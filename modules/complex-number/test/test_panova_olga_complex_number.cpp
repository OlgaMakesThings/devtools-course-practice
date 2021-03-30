// Copyright 2021 Panova Olga

#include <gtest/gtest.h>
#include <cmath>
#include "include/complex_number.h"

TEST(Panova_Olga_ComplexNumberTest, Comparing_And_Fitting) {
    ComplexNumber re_tenth(0.01, 0);
    ComplexNumber im_tenth(0, 0.01);
    ComplexNumber a(3.01, -6.49);
    ComplexNumber b(3.02, -6.50);

    if (a.getRe() != b.getRe()) {
        if (a.getRe() < b.getRe()) {
            a = a + re_tenth;
        } else {
            a = a - re_tenth;
        }
    }
    if (a.getIm() != b.getIm()) {
        if (a.getIm() < b.getIm()) {
            a = a + im_tenth;
        } else {
            a = a - im_tenth;
        }
    }

    ASSERT_DOUBLE_EQ(a.getRe(), a.getRe());
    ASSERT_DOUBLE_EQ(a.getIm(), b.getIm());
}

TEST(Panova_Olga_ComplexNumberTest, Conjugate_Relations) {
    double re = -21.56402;
    double im = 70.45119;

    ComplexNumber i(0, 1);
    ComplexNumber just_two(2, 0);
    ComplexNumber z(re, im);
    ComplexNumber not_z(re, -im);

    ComplexNumber re_relation = (z + not_z) / just_two;
    ComplexNumber im_relation = (z - not_z) / (i + i);

    ASSERT_EQ(z.getRe(), re_relation.getRe());
    ASSERT_EQ(z.getIm(), im_relation.getRe());
}

TEST(Panova_Olga_ComplexNumberTest, Parallelogram_Fourth_Apex) {
    ComplexNumber a(-1.15, 2.77);
    ComplexNumber b(2.19, -12.03);
    ComplexNumber c(11.14, -50.08);
    ComplexNumber expected_x(-1.2015, -18.8159);
    ComplexNumber expected_y(14.032, -48.1634);
    bool check = true;

    ComplexNumber x = a*a+(b+b-c)/(a+a+a)-b+b/a*(a+a);
    ComplexNumber y = c-b*(a*a-a*a+b/b)/a+a-a*(c/c/c);

    x.setRe(round(x.getRe() * 10000) / 10000);
    x.setIm(round(x.getIm() * 10000) / 10000);
    y.setRe(round(y.getRe() * 10000) / 10000);
    y.setIm(round(y.getIm() * 10000) / 10000);

    if ((x != expected_x) || (y != expected_y)) {
        check = false;
    }

    ASSERT_TRUE(check);
}
