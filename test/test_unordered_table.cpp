#include "gtest/gtest.h"
#include "unordered_table.h"

TEST(unordered_table, can_create_and_push_smth_table) {
	std::string a = "a1";
	unordered_table<std::string, int> tb(a, 5);
	EXPECT_EQ(5, tb["a1"]);
}

TEST(unordered_table, can_erase_elem_from_table) {
	std::string a = "a1";
	unordered_table<std::string, int> tb(a, 5);
	tb.erase("a1");
	EXPECT_EQ(0, tb.size());
}

TEST(unordered_table, cant_erase_key_which_doesnt_exist_in_the_table) {
	std::string a = "a1";
	unordered_table<std::string, int> tb(a, 5);
	ASSERT_ANY_THROW(tb.erase("a2"));
}

TEST(unordered_table, cant_find_key_which_doesnt_exist_in_the_table) {
	std::string a = "a1";
	unordered_table<std::string, int> tb(a, 5);
	ASSERT_ANY_THROW(tb["a2"]);
}

TEST(unordered_table, many_pushes) {
	std::string a = "a";
	unordered_table<std::string, int> tb;
	for (int i = 0; i < 30; i++) {
		tb.push_back(a + std::to_string(i), i);
	}

	for (int j = 29; j > -1; j--) {
		EXPECT_EQ(j, tb[a + std::to_string(j)]);
	}
}

TEST(unordered_table, many_erases) {
	std::string a = "a";
	unordered_table<std::string, int> tb;
	for (int i = 0; i < 30; i++) {
		tb.push_back(a + std::to_string(i), i);
	}

	for (int j = 29; j > -1; j--) {
		tb.erase(a + std::to_string(j));
	}

	EXPECT_EQ(0, tb.size());
}