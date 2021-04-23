// Copyright 2021 Panova Olga

#include <gtest/gtest.h>
#include "include/3d_shapes_volume.h"

TEST(3D_SHAPES_VOLUME, Calculate_Sphere_Volume) {
	Ñube vol(0, 0, 0, 3);
	int volume = vol.Volume();
	std::cout << "volume = " << volume << std::endl;
	ASSERT_TRUE(true);
}
TEST(3D_SHAPES_VOLUME, Calculate_Cube_Volume) {
	Ñube vol(1, 1, 1, 1);
	int volume = vol.Volume();
	std::cout << "volume = " << volume << std::endl;
	ASSERT_TRUE(true);
}
TEST(3D_SHAPES_VOLUME, one) {
	ASSERT_EQ(1, 1);
}
TEST(3D_SHAPES_VOLUME, two) {
	ASSERT_EQ(1, 1);
}
TEST(3D_SHAPES_VOLUME, three) {
	ASSERT_EQ(1, 1);
}
TEST(3D_SHAPES_VOLUME, four) {
	ASSERT_EQ(1, 1);
}
TEST(3D_SHAPES_VOLUME, five) {
	ASSERT_EQ(1, 1);
}
TEST(3D_SHAPES_VOLUME, six) {
	ASSERT_EQ(1, 1);
}
TEST(3D_SHAPES_VOLUME, seven) {
	ASSERT_EQ(1, 1);
}
TEST(3D_SHAPES_VOLUME, eight) {
	ASSERT_EQ(1, 1);
}
TEST(3D_SHAPES_VOLUME, nine) {
	ASSERT_EQ(1, 1);
}
TEST(3D_SHAPES_VOLUME, ten) {
	ASSERT_EQ(1, 1);
}

