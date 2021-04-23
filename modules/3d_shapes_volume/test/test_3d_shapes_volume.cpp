// Copyright 2021 Panova Olga

#include <gtest/gtest.h>
#include "include/3d_shapes_volume.h"

TEST(PANOVA_SHAPES_VOLUME, Calculate_Cube_Volume) {
	//Arrange
	double side = 1.1;
	double true_volume = 1.331;

	//Act
	Ñube shape(0, 0, 0, side);
	double volume = shape.Volume();

	//Assert
	ASSERT_DOUBLE_EQ(true_volume, volume);
}
TEST(PANOVA_SHAPES_VOLUME, Calculate_Sphere_Volume) {
	//Arrange
	double radius = 1.2;
	double true_volume = 7.23823;

	//Act
	Sphere shape(0, 0, 0, radius);
	double volume = shape.Volume();
	volume = round(volume * 100000) / 100000;

	//Assert
	ASSERT_DOUBLE_EQ(true_volume, volume);
}

TEST(PANOVA_SHAPES_VOLUME, Calculate_Cone_Volume) {
	//Arrange
    double base_radius = 1.3;
    double h = 2.3;
	double true_volume = 4.07046;

	//Act
	Cone shape(0, 0, 0, base_radius, h);
	double volume = shape.Volume();
	volume = round(volume * 100000) / 100000;

	//Assert
	ASSERT_DOUBLE_EQ(true_volume, volume);
}

TEST(PANOVA_SHAPES_VOLUME, Calculate_Parall_ed_Volume) {
	//Arrange
	double length = 4.18, width = 2.77, h = 2.95;
	double true_volume = 34.15687;

	//Act
	Parallelepiped shape(0, 0, 0, length, width, h);
	double volume = shape.Volume();

	//Assert
	ASSERT_DOUBLE_EQ(true_volume, volume);
}
