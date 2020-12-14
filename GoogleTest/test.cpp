#include "pch.h"
#include "..//task3/task3.h"

vector<int> tmpa = { 1,2,3,11,22,33 };
vector<vector<int>> tmpb = { {1,2,3},{11,22,33} };
vector<vector<int>> tmpc = {{1,1,1,1,1},
							{0,1,1,1,0},
							{0,0,1,0,0},
							{0,1,1,1,0},
							{1,1,1,1,1}};

TEST(Test1, a) {
	auto a = tmpa;
	vector<vector<int>> b;
	atob(a, b, 2, 3);
	EXPECT_TRUE(tmpb == b);
	//EXPECT_EQ(1, 1);
	//EXPECT_TRUE(true);
}

TEST(Test1, b) {
	auto b = tmpb;
	vector<int> a;
	btoa(a, b);
	EXPECT_TRUE(tmpa == a);
	//EXPECT_EQ(1, 1);
	//EXPECT_TRUE(true);
}

TEST(Test2, a) {
	EXPECT_TRUE(sumOfArray(tmpc) == 17);
}