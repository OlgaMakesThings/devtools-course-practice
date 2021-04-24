// Copyright 2021 Panova Olga

#include <gtest/gtest.h>
#include "include/3d_shapes_volume.h"

TEST(PANOVA_SHAPES_VOLUME, Calculate_Cube_Volume) {
    // Arrange
    double side = 1.1;
    double true_volume = 1.331;

    // Act
    Cube shape(1, 2, 3, side);
    double volume = shape.Volume();

    // Assert
    ASSERT_DOUBLE_EQ(true_volume, volume);
}

TEST(PANOVA_SHAPES_VOLUME, Calculate_Sphere_Volume) {
    // Arrange
    double radius = 1.2;
    double true_volume = 7.23823;

    // Act
    Sphere shape(3, 2, 1, radius);
    double volume = shape.Volume();
    volume = round(volume * 100000) / 100000;

    // Assert
    ASSERT_DOUBLE_EQ(true_volume, volume);
}

TEST(PANOVA_SHAPES_VOLUME, Calculate_Cone_Volume) {
    // Arrange
    double base_radius = 1.3;
    double h = 2.3;
    double true_volume = 4.07046;

    // Act
    Cone shape(1, 0, 4, base_radius, h);
    double volume = shape.Volume();
    volume = round(volume * 100000) / 100000;

    // Assert
    ASSERT_DOUBLE_EQ(true_volume, volume);
}

TEST(PANOVA_SHAPES_VOLUME, Calculate_Parall_ed_Volume) {
    // Arrange
    double length = 4.18, width = 2.77, h = 2.95;
    double true_volume = 34.15687;

    // Act
    Parallelepiped shape(0, 0, 0, length, width, h);
    double volume = shape.Volume();

    // Assert
    ASSERT_DOUBLE_EQ(true_volume, volume);
}

TEST(PANOVA_SHAPES_VOLUME, Calculate_Prism_Volume) {
    // Arrange
    double side = 13.01, h = 5.39;
    int n = 5;
    double true_volume = 147.13815;

    // Act
    Prism shape(0, 0, 0, side, h, n);
    double volume = shape.Volume();
    volume = round(volume * 100000) / 100000;

    // Assert
    ASSERT_DOUBLE_EQ(true_volume, volume);
}

TEST(PANOVA_SHAPES_VOLUME, Calculate_Pyramid_Volume) {
    // Arrange
    double side = 2.09, h = 4.86;
    int n = 9;
    double true_volume = 7.11693;

    // Act
    Pyramid shape(0, 0, 0, side, h, n);
    double volume = shape.Volume();
    volume = round(volume * 100000) / 100000;

    // Assert
    ASSERT_DOUBLE_EQ(true_volume, volume);
}

TEST(PANOVA_SHAPES_VOLUME, Calculate_Torus_Volume) {
    // Arrange
    double d = 10.87, r = 3.51;
    double true_volume = 2643.46472;

    // Act
    Torus shape(0, 0, 0, d, r);
    double volume = shape.Volume();
    volume = round(volume * 100000) / 100000;

    // Assert
    ASSERT_DOUBLE_EQ(true_volume, volume);
}
